/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 2; tab-width: 2 -*- */
/*
 * nimf-private.c
 * This file is part of Nimf.
 *
 * Copyright (C) 2015,2016 Hodong Kim <cogniti@gmail.com>
 *
 * Nimf is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Nimf is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program;  If not, see <http://www.gnu.org/licenses/>.
 */

#include "nimf-private.h"
#include <syslog.h>

void
nimf_send_message (GSocket         *socket,
                   guint16          icid,
                   NimfMessageType  type,
                   gpointer         data,
                   guint16          data_len,
                   GDestroyNotify   data_destroy_func)
{
  g_debug (G_STRLOC ": %s: fd = %d", G_STRFUNC, g_socket_get_fd (socket));

  NimfMessage *message;
  const NimfMessageHeader *header;
  GError *error = NULL;
  gssize n_written;

  message = nimf_message_new_full (type, icid,
                                   data, data_len, data_destroy_func);
  header  = nimf_message_get_header (message);

  n_written = g_socket_send (socket,
                             (gchar *) header,
                             nimf_message_get_header_size (),
                             NULL, &error);

  if (G_UNLIKELY (n_written < nimf_message_get_header_size ()))
  {
    g_critical (G_STRLOC ": %s: sent %"G_GSSIZE_FORMAT" less than %d",
                G_STRFUNC, n_written, nimf_message_get_header_size ());
    if (error)
    {
      g_critical (G_STRLOC ": %s: %s", G_STRFUNC, error->message);
      g_error_free (error);
    }

    nimf_message_unref (message);

    return;
  }

  if (G_LIKELY (message->header->data_len > 0))
  {
    n_written = g_socket_send (socket,
                               message->data,
                               message->header->data_len,
                               NULL, &error);

    if (G_UNLIKELY (n_written < message->header->data_len))
    {
      g_critical (G_STRLOC ": %s: sent %"G_GSSIZE_FORMAT" less than %d",
                  G_STRFUNC, n_written, message->header->data_len);

      if (error)
      {
        g_critical (G_STRLOC ": %s: %s", G_STRFUNC, error->message);
        g_error_free (error);
      }

      nimf_message_unref (message);

      return;
    }
  }

  /* debug message */
  const gchar *name = nimf_message_get_name (message);
  if (name)
    g_debug ("send: %s, fd: %d", name, g_socket_get_fd(socket));
  else
    g_error (G_STRLOC ": unknown message type");

  nimf_message_unref (message);
}

NimfMessage *nimf_recv_message (GSocket *socket)
{
  g_debug (G_STRLOC ": %s", G_STRFUNC);

  NimfMessage *message = nimf_message_new ();
  GError *error = NULL;
  gssize n_read = 0;

  n_read = g_socket_receive (socket,
                             (gchar *) message->header,
                             nimf_message_get_header_size (),
                             NULL, &error);

  if (G_UNLIKELY (n_read < nimf_message_get_header_size ()))
  {
    g_critical (G_STRLOC ": %s: received %"G_GSSIZE_FORMAT" less than %d",
                G_STRFUNC, n_read, nimf_message_get_header_size ());

    if (error)
    {
      g_critical (G_STRLOC ": %s: %s", G_STRFUNC, error->message);
      g_error_free (error);
    }

    nimf_message_unref (message);

    return NULL;
  }

  if (message->header->data_len > 0)
  {
    nimf_message_set_body (message,
                           g_malloc0 (message->header->data_len),
                           message->header->data_len,
                           g_free);

    n_read = g_socket_receive (socket,
                               message->data,
                               message->header->data_len,
                               NULL, &error);

    if (G_UNLIKELY (n_read < message->header->data_len))
    {
      g_critical (G_STRLOC ": %s: received %"G_GSSIZE_FORMAT" less than %d",
                  G_STRFUNC, n_read, message->header->data_len);

      if (error)
      {
        g_critical (G_STRLOC ": %s: %s", G_STRFUNC, error->message);
        g_error_free (error);
      }

      nimf_message_unref (message);

      return NULL;
    }
  }

  /* debug message */
  const gchar *name = nimf_message_get_name (message);
  if (name)
    g_debug ("recv: %s, fd: %d", name, g_socket_get_fd (socket));
  else
    g_error (G_STRLOC ": unknown message type");

  return message;
}

void nimf_log_default_handler (const gchar    *log_domain,
                               GLogLevelFlags  log_level,
                               const gchar    *message,
                               gboolean       *debug)
{
  int priority;
  const gchar *prefix;

  switch (log_level & G_LOG_LEVEL_MASK)
  {
    case G_LOG_LEVEL_ERROR:
      priority = LOG_ERR;
      prefix = "ERROR **";
      break;
    case G_LOG_LEVEL_CRITICAL:
      priority = LOG_CRIT;
      prefix = "CRITICAL **";
      break;
    case G_LOG_LEVEL_WARNING:
      priority = LOG_WARNING;
      prefix = "WARNING **";
      break;
    case G_LOG_LEVEL_MESSAGE:
      priority = LOG_NOTICE;
      prefix = "Message";
      break;
    case G_LOG_LEVEL_INFO:
      priority = LOG_INFO;
      prefix = "INFO";
      break;
    case G_LOG_LEVEL_DEBUG:
      priority = LOG_DEBUG;
      prefix = "DEBUG";
      break;
    default:
      priority = LOG_NOTICE;
      prefix = "LOG";
      break;
  }

  if (priority == LOG_DEBUG && (debug == NULL || *debug == FALSE))
    return;

  syslog (priority, "%s-%s: %s", log_domain, prefix, message ? message : "(NULL) message");
}

void
nimf_result_iteration_until (NimfResult      *result,
                             GMainContext    *main_context,
                             guint16          icid,
                             NimfMessageType  type)
{
  g_debug (G_STRLOC ": %s", G_STRFUNC);

  do {
    result->is_dispatched = FALSE;
    g_main_context_iteration (main_context, TRUE);
  } while ((result->is_dispatched == FALSE) ||
           (result->reply && ((result->reply->header->type != type) ||
                              (result->reply->header->icid != icid))));

  if (G_UNLIKELY (result->is_dispatched == TRUE && result->reply == NULL))
    g_critical (G_STRLOC ": %s:Can't receive %s", G_STRFUNC,
                nimf_message_get_name_by_type (type));

  /* This prevents not checking reply in the following iteration
   *                               send commit (wait reply)
   *                               recv   reset
   *                               send     commit (wait reply)
   *                               recv     commit-reply (is_dispatched: TRUE)
   * `result->is_dispatched = FALSE' prevents breaking loop
   *                               send   reset-reply
   *                               recv commit-reply
   */
  result->is_dispatched = FALSE;
}
