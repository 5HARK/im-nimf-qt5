TARGET = nimfplatforminputcontextplugin

QT += dbus gui-private

SOURCES += $$PWD/im-nimf-qt5.cpp \
           $$PWD/include/im-nimf-qt5-util.c \
           $$PWD/include/nimf-candidatable.c \
           $$PWD/include/nimf-client.c \
           $$PWD/include/nimf-connection.c \
           $$PWD/include/nimf-engine.c \
           $$PWD/include/nimf-enum-types.c \
           $$PWD/include/nimf-events.c \
           $$PWD/include/nimf-im.c \
           $$PWD/include/nimf-key-syms.c \
           $$PWD/include/nimf-marshalers.c \
           $$PWD/include/nimf-message.c \
           $$PWD/include/nimf-module.c \
           $$PWD/include/nimf-preeditable.c \
           $$PWD/include/nimf-private.c \
           $$PWD/include/nimf-server-im.c \
           $$PWD/include/nimf-server.c \
           $$PWD/include/nimf-service-im.c \
           $$PWD/include/nimf-service.c \
           $$PWD/include/nimf-types.c

HEADERS += $$PWD/include/nimf.h

DEFINES += NIMF_MODULE_DIR=\"\\\"/usr/lib/x86_64-linux-gnu/nimf/modules\\\"\" NIMF_SERVICE_MODULE_DIR=\"\\\"/usr/lib/x86_64-linux-gnu/nimf/modules/serives\\\"\"

OTHER_FILES += $$PWD/nimf.json

CONFIG += link_pkgconfig no_keywords static
PKGCONFIG += glib-2.0 gtk+-2.0 audit gio-2.0 gobject-2.0
PLUGIN_TYPE = platforminputcontexts
PLUGIN_EXTENDS = -
PLUGIN_CLASS_NAME = QNimfPlatformInputContextPlugin
load(qt_plugin)
