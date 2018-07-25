
/* Generated data (by glib-mkenums) */

#include "nimf-enum-types.h"
#include "nimf-key-syms.h"
#include "nimf-message.h"
#include "nimf-types.h"

/* enumerations from "nimf-key-syms.h" */
GType
nimf_key_sym_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NIMF_KEY_space, "NIMF_KEY_space", "space" },
        { NIMF_KEY_exclam, "NIMF_KEY_exclam", "exclam" },
        { NIMF_KEY_quotedbl, "NIMF_KEY_quotedbl", "quotedbl" },
        { NIMF_KEY_numbersign, "NIMF_KEY_numbersign", "numbersign" },
        { NIMF_KEY_dollar, "NIMF_KEY_dollar", "dollar" },
        { NIMF_KEY_percent, "NIMF_KEY_percent", "percent" },
        { NIMF_KEY_ampersand, "NIMF_KEY_ampersand", "ampersand" },
        { NIMF_KEY_apostrophe, "NIMF_KEY_apostrophe", "apostrophe" },
        { NIMF_KEY_parenleft, "NIMF_KEY_parenleft", "parenleft" },
        { NIMF_KEY_parenright, "NIMF_KEY_parenright", "parenright" },
        { NIMF_KEY_asterisk, "NIMF_KEY_asterisk", "asterisk" },
        { NIMF_KEY_plus, "NIMF_KEY_plus", "plus" },
        { NIMF_KEY_comma, "NIMF_KEY_comma", "comma" },
        { NIMF_KEY_minus, "NIMF_KEY_minus", "minus" },
        { NIMF_KEY_period, "NIMF_KEY_period", "period" },
        { NIMF_KEY_slash, "NIMF_KEY_slash", "slash" },
        { NIMF_KEY_0, "NIMF_KEY_0", "0" },
        { NIMF_KEY_1, "NIMF_KEY_1", "1" },
        { NIMF_KEY_2, "NIMF_KEY_2", "2" },
        { NIMF_KEY_3, "NIMF_KEY_3", "3" },
        { NIMF_KEY_4, "NIMF_KEY_4", "4" },
        { NIMF_KEY_5, "NIMF_KEY_5", "5" },
        { NIMF_KEY_6, "NIMF_KEY_6", "6" },
        { NIMF_KEY_7, "NIMF_KEY_7", "7" },
        { NIMF_KEY_8, "NIMF_KEY_8", "8" },
        { NIMF_KEY_9, "NIMF_KEY_9", "9" },
        { NIMF_KEY_colon, "NIMF_KEY_colon", "colon" },
        { NIMF_KEY_semicolon, "NIMF_KEY_semicolon", "semicolon" },
        { NIMF_KEY_less, "NIMF_KEY_less", "less" },
        { NIMF_KEY_equal, "NIMF_KEY_equal", "equal" },
        { NIMF_KEY_greater, "NIMF_KEY_greater", "greater" },
        { NIMF_KEY_question, "NIMF_KEY_question", "question" },
        { NIMF_KEY_at, "NIMF_KEY_at", "at" },
        { NIMF_KEY_A, "NIMF_KEY_A", "A" },
        { NIMF_KEY_B, "NIMF_KEY_B", "B" },
        { NIMF_KEY_C, "NIMF_KEY_C", "C" },
        { NIMF_KEY_D, "NIMF_KEY_D", "D" },
        { NIMF_KEY_E, "NIMF_KEY_E", "E" },
        { NIMF_KEY_F, "NIMF_KEY_F", "F" },
        { NIMF_KEY_G, "NIMF_KEY_G", "G" },
        { NIMF_KEY_H, "NIMF_KEY_H", "H" },
        { NIMF_KEY_I, "NIMF_KEY_I", "I" },
        { NIMF_KEY_J, "NIMF_KEY_J", "J" },
        { NIMF_KEY_K, "NIMF_KEY_K", "K" },
        { NIMF_KEY_L, "NIMF_KEY_L", "L" },
        { NIMF_KEY_M, "NIMF_KEY_M", "M" },
        { NIMF_KEY_N, "NIMF_KEY_N", "N" },
        { NIMF_KEY_O, "NIMF_KEY_O", "O" },
        { NIMF_KEY_P, "NIMF_KEY_P", "P" },
        { NIMF_KEY_Q, "NIMF_KEY_Q", "Q" },
        { NIMF_KEY_R, "NIMF_KEY_R", "R" },
        { NIMF_KEY_S, "NIMF_KEY_S", "S" },
        { NIMF_KEY_T, "NIMF_KEY_T", "T" },
        { NIMF_KEY_U, "NIMF_KEY_U", "U" },
        { NIMF_KEY_V, "NIMF_KEY_V", "V" },
        { NIMF_KEY_W, "NIMF_KEY_W", "W" },
        { NIMF_KEY_X, "NIMF_KEY_X", "X" },
        { NIMF_KEY_Y, "NIMF_KEY_Y", "Y" },
        { NIMF_KEY_Z, "NIMF_KEY_Z", "Z" },
        { NIMF_KEY_bracketleft, "NIMF_KEY_bracketleft", "bracketleft" },
        { NIMF_KEY_backslash, "NIMF_KEY_backslash", "backslash" },
        { NIMF_KEY_bracketright, "NIMF_KEY_bracketright", "bracketright" },
        { NIMF_KEY_asciicircum, "NIMF_KEY_asciicircum", "asciicircum" },
        { NIMF_KEY_underscore, "NIMF_KEY_underscore", "underscore" },
        { NIMF_KEY_grave, "NIMF_KEY_grave", "grave" },
        { NIMF_KEY_a, "NIMF_KEY_a", "a" },
        { NIMF_KEY_b, "NIMF_KEY_b", "b" },
        { NIMF_KEY_c, "NIMF_KEY_c", "c" },
        { NIMF_KEY_d, "NIMF_KEY_d", "d" },
        { NIMF_KEY_e, "NIMF_KEY_e", "e" },
        { NIMF_KEY_f, "NIMF_KEY_f", "f" },
        { NIMF_KEY_g, "NIMF_KEY_g", "g" },
        { NIMF_KEY_h, "NIMF_KEY_h", "h" },
        { NIMF_KEY_i, "NIMF_KEY_i", "i" },
        { NIMF_KEY_j, "NIMF_KEY_j", "j" },
        { NIMF_KEY_k, "NIMF_KEY_k", "k" },
        { NIMF_KEY_l, "NIMF_KEY_l", "l" },
        { NIMF_KEY_m, "NIMF_KEY_m", "m" },
        { NIMF_KEY_n, "NIMF_KEY_n", "n" },
        { NIMF_KEY_o, "NIMF_KEY_o", "o" },
        { NIMF_KEY_p, "NIMF_KEY_p", "p" },
        { NIMF_KEY_q, "NIMF_KEY_q", "q" },
        { NIMF_KEY_r, "NIMF_KEY_r", "r" },
        { NIMF_KEY_s, "NIMF_KEY_s", "s" },
        { NIMF_KEY_t, "NIMF_KEY_t", "t" },
        { NIMF_KEY_u, "NIMF_KEY_u", "u" },
        { NIMF_KEY_v, "NIMF_KEY_v", "v" },
        { NIMF_KEY_w, "NIMF_KEY_w", "w" },
        { NIMF_KEY_x, "NIMF_KEY_x", "x" },
        { NIMF_KEY_y, "NIMF_KEY_y", "y" },
        { NIMF_KEY_z, "NIMF_KEY_z", "z" },
        { NIMF_KEY_braceleft, "NIMF_KEY_braceleft", "braceleft" },
        { NIMF_KEY_bar, "NIMF_KEY_bar", "bar" },
        { NIMF_KEY_braceright, "NIMF_KEY_braceright", "braceright" },
        { NIMF_KEY_asciitilde, "NIMF_KEY_asciitilde", "asciitilde" },
        { NIMF_KEY_ISO_Level3_Shift, "NIMF_KEY_ISO_Level3_Shift", "ISO_Level3_Shift" },
        { NIMF_KEY_ISO_Left_Tab, "NIMF_KEY_ISO_Left_Tab", "ISO_Left_Tab" },
        { NIMF_KEY_BackSpace, "NIMF_KEY_BackSpace", "BackSpace" },
        { NIMF_KEY_Tab, "NIMF_KEY_Tab", "Tab" },
        { NIMF_KEY_Return, "NIMF_KEY_Return", "Return" },
        { NIMF_KEY_Pause, "NIMF_KEY_Pause", "Pause" },
        { NIMF_KEY_Scroll_Lock, "NIMF_KEY_Scroll_Lock", "Scroll_Lock" },
        { NIMF_KEY_Sys_Req, "NIMF_KEY_Sys_Req", "Sys_Req" },
        { NIMF_KEY_Escape, "NIMF_KEY_Escape", "Escape" },
        { NIMF_KEY_Multi_key, "NIMF_KEY_Multi_key", "Multi_key" },
        { NIMF_KEY_Hangul, "NIMF_KEY_Hangul", "Hangul" },
        { NIMF_KEY_Hangul_Hanja, "NIMF_KEY_Hangul_Hanja", "Hangul_Hanja" },
        { NIMF_KEY_Home, "NIMF_KEY_Home", "Home" },
        { NIMF_KEY_Left, "NIMF_KEY_Left", "Left" },
        { NIMF_KEY_Up, "NIMF_KEY_Up", "Up" },
        { NIMF_KEY_Right, "NIMF_KEY_Right", "Right" },
        { NIMF_KEY_Down, "NIMF_KEY_Down", "Down" },
        { NIMF_KEY_Page_Up, "NIMF_KEY_Page_Up", "Page_Up" },
        { NIMF_KEY_Page_Down, "NIMF_KEY_Page_Down", "Page_Down" },
        { NIMF_KEY_End, "NIMF_KEY_End", "End" },
        { NIMF_KEY_Print, "NIMF_KEY_Print", "Print" },
        { NIMF_KEY_Execute, "NIMF_KEY_Execute", "Execut" },
        { NIMF_KEY_Insert, "NIMF_KEY_Insert", "Insert" },
        { NIMF_KEY_Menu, "NIMF_KEY_Menu", "Menu" },
        { NIMF_KEY_Break, "NIMF_KEY_Break", "Break" },
        { NIMF_KEY_KP_Enter, "NIMF_KEY_KP_Enter", "KP_Enter" },
        { NIMF_KEY_KP_Left, "NIMF_KEY_KP_Left", "KP_Left" },
        { NIMF_KEY_KP_Up, "NIMF_KEY_KP_Up", "KP_Up" },
        { NIMF_KEY_KP_Right, "NIMF_KEY_KP_Right", "KP_Right" },
        { NIMF_KEY_KP_Down, "NIMF_KEY_KP_Down", "KP_Down" },
        { NIMF_KEY_KP_Page_Up, "NIMF_KEY_KP_Page_Up", "KP_Page_Up" },
        { NIMF_KEY_KP_Page_Down, "NIMF_KEY_KP_Page_Down", "KP_Page_Down" },
        { NIMF_KEY_KP_Delete, "NIMF_KEY_KP_Delete", "KP_Delete" },
        { NIMF_KEY_KP_Multiply, "NIMF_KEY_KP_Multiply", "KP_Multiply" },
        { NIMF_KEY_KP_Add, "NIMF_KEY_KP_Add", "KP_Add" },
        { NIMF_KEY_KP_Subtract, "NIMF_KEY_KP_Subtract", "KP_Subtract" },
        { NIMF_KEY_KP_Decimal, "NIMF_KEY_KP_Decimal", "KP_Decimal" },
        { NIMF_KEY_KP_Divide, "NIMF_KEY_KP_Divide", "KP_Divide" },
        { NIMF_KEY_KP_0, "NIMF_KEY_KP_0", "KP_0" },
        { NIMF_KEY_KP_1, "NIMF_KEY_KP_1", "KP_1" },
        { NIMF_KEY_KP_2, "NIMF_KEY_KP_2", "KP_2" },
        { NIMF_KEY_KP_3, "NIMF_KEY_KP_3", "KP_3" },
        { NIMF_KEY_KP_4, "NIMF_KEY_KP_4", "KP_4" },
        { NIMF_KEY_KP_5, "NIMF_KEY_KP_5", "KP_5" },
        { NIMF_KEY_KP_6, "NIMF_KEY_KP_6", "KP_6" },
        { NIMF_KEY_KP_7, "NIMF_KEY_KP_7", "KP_7" },
        { NIMF_KEY_KP_8, "NIMF_KEY_KP_8", "KP_8" },
        { NIMF_KEY_KP_9, "NIMF_KEY_KP_9", "KP_9" },
        { NIMF_KEY_F1, "NIMF_KEY_F1", "F1" },
        { NIMF_KEY_F2, "NIMF_KEY_F2", "F2" },
        { NIMF_KEY_F3, "NIMF_KEY_F3", "F3" },
        { NIMF_KEY_F4, "NIMF_KEY_F4", "F4" },
        { NIMF_KEY_F5, "NIMF_KEY_F5", "F5" },
        { NIMF_KEY_F6, "NIMF_KEY_F6", "F6" },
        { NIMF_KEY_F7, "NIMF_KEY_F7", "F7" },
        { NIMF_KEY_F8, "NIMF_KEY_F8", "F8" },
        { NIMF_KEY_F9, "NIMF_KEY_F9", "F9" },
        { NIMF_KEY_F10, "NIMF_KEY_F10", "F10" },
        { NIMF_KEY_F11, "NIMF_KEY_F11", "F11" },
        { NIMF_KEY_F12, "NIMF_KEY_F12", "F12" },
        { NIMF_KEY_Shift_L, "NIMF_KEY_Shift_L", "Shift_L" },
        { NIMF_KEY_Shift_R, "NIMF_KEY_Shift_R", "Shift_R" },
        { NIMF_KEY_Control_L, "NIMF_KEY_Control_L", "Control_L" },
        { NIMF_KEY_Control_R, "NIMF_KEY_Control_R", "Control_R" },
        { NIMF_KEY_Caps_Lock, "NIMF_KEY_Caps_Lock", "Caps_Lock" },
        { NIMF_KEY_Shift_Lock, "NIMF_KEY_Shift_Lock", "Shift_Lock" },
        { NIMF_KEY_Meta_L, "NIMF_KEY_Meta_L", "Meta_L" },
        { NIMF_KEY_Meta_R, "NIMF_KEY_Meta_R", "Meta_R" },
        { NIMF_KEY_Alt_L, "NIMF_KEY_Alt_L", "Alt_L" },
        { NIMF_KEY_Alt_R, "NIMF_KEY_Alt_R", "Alt_R" },
        { NIMF_KEY_Super_L, "NIMF_KEY_Super_L", "Super_L" },
        { NIMF_KEY_Super_R, "NIMF_KEY_Super_R", "Super_R" },
        { NIMF_KEY_Delete, "NIMF_KEY_Delete", "Delete" },
        { NIMF_KEY_VoidSymbol, "NIMF_KEY_VoidSymbol", "VoidSymbol" },
        { NIMF_KEY_WakeUp, "NIMF_KEY_WakeUp", "WakeUp" },
        { NIMF_KEY_WebCam, "NIMF_KEY_WebCam", "WebCam" },
        { NIMF_KEY_WLAN, "NIMF_KEY_WLAN", "WLAN" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NimfKeySym"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

/* enumerations from "nimf-message.h" */
GType
nimf_message_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NIMF_MESSAGE_NONE, "NIMF_MESSAGE_NONE", "none" },
        { NIMF_MESSAGE_CREATE_CONTEXT, "NIMF_MESSAGE_CREATE_CONTEXT", "create-context" },
        { NIMF_MESSAGE_CREATE_CONTEXT_REPLY, "NIMF_MESSAGE_CREATE_CONTEXT_REPLY", "create-context-reply" },
        { NIMF_MESSAGE_DESTROY_CONTEXT, "NIMF_MESSAGE_DESTROY_CONTEXT", "destroy-context" },
        { NIMF_MESSAGE_DESTROY_CONTEXT_REPLY, "NIMF_MESSAGE_DESTROY_CONTEXT_REPLY", "destroy-context-reply" },
        { NIMF_MESSAGE_FILTER_EVENT, "NIMF_MESSAGE_FILTER_EVENT", "filter-event" },
        { NIMF_MESSAGE_FILTER_EVENT_REPLY, "NIMF_MESSAGE_FILTER_EVENT_REPLY", "filter-event-reply" },
        { NIMF_MESSAGE_RESET, "NIMF_MESSAGE_RESET", "reset" },
        { NIMF_MESSAGE_RESET_REPLY, "NIMF_MESSAGE_RESET_REPLY", "reset-reply" },
        { NIMF_MESSAGE_FOCUS_IN, "NIMF_MESSAGE_FOCUS_IN", "focus-in" },
        { NIMF_MESSAGE_FOCUS_IN_REPLY, "NIMF_MESSAGE_FOCUS_IN_REPLY", "focus-in-reply" },
        { NIMF_MESSAGE_FOCUS_OUT, "NIMF_MESSAGE_FOCUS_OUT", "focus-out" },
        { NIMF_MESSAGE_FOCUS_OUT_REPLY, "NIMF_MESSAGE_FOCUS_OUT_REPLY", "focus-out-reply" },
        { NIMF_MESSAGE_SET_SURROUNDING, "NIMF_MESSAGE_SET_SURROUNDING", "set-surrounding" },
        { NIMF_MESSAGE_SET_SURROUNDING_REPLY, "NIMF_MESSAGE_SET_SURROUNDING_REPLY", "set-surrounding-reply" },
        { NIMF_MESSAGE_GET_SURROUNDING, "NIMF_MESSAGE_GET_SURROUNDING", "get-surrounding" },
        { NIMF_MESSAGE_GET_SURROUNDING_REPLY, "NIMF_MESSAGE_GET_SURROUNDING_REPLY", "get-surrounding-reply" },
        { NIMF_MESSAGE_SET_CURSOR_LOCATION, "NIMF_MESSAGE_SET_CURSOR_LOCATION", "set-cursor-location" },
        { NIMF_MESSAGE_SET_CURSOR_LOCATION_REPLY, "NIMF_MESSAGE_SET_CURSOR_LOCATION_REPLY", "set-cursor-location-reply" },
        { NIMF_MESSAGE_SET_USE_PREEDIT, "NIMF_MESSAGE_SET_USE_PREEDIT", "set-use-preedit" },
        { NIMF_MESSAGE_SET_USE_PREEDIT_REPLY, "NIMF_MESSAGE_SET_USE_PREEDIT_REPLY", "set-use-preedit-reply" },
        { NIMF_MESSAGE_PREEDIT_START, "NIMF_MESSAGE_PREEDIT_START", "preedit-start" },
        { NIMF_MESSAGE_PREEDIT_START_REPLY, "NIMF_MESSAGE_PREEDIT_START_REPLY", "preedit-start-reply" },
        { NIMF_MESSAGE_PREEDIT_END, "NIMF_MESSAGE_PREEDIT_END", "preedit-end" },
        { NIMF_MESSAGE_PREEDIT_END_REPLY, "NIMF_MESSAGE_PREEDIT_END_REPLY", "preedit-end-reply" },
        { NIMF_MESSAGE_PREEDIT_CHANGED, "NIMF_MESSAGE_PREEDIT_CHANGED", "preedit-changed" },
        { NIMF_MESSAGE_PREEDIT_CHANGED_REPLY, "NIMF_MESSAGE_PREEDIT_CHANGED_REPLY", "preedit-changed-reply" },
        { NIMF_MESSAGE_COMMIT, "NIMF_MESSAGE_COMMIT", "commit" },
        { NIMF_MESSAGE_COMMIT_REPLY, "NIMF_MESSAGE_COMMIT_REPLY", "commit-reply" },
        { NIMF_MESSAGE_RETRIEVE_SURROUNDING, "NIMF_MESSAGE_RETRIEVE_SURROUNDING", "retrieve-surrounding" },
        { NIMF_MESSAGE_RETRIEVE_SURROUNDING_REPLY, "NIMF_MESSAGE_RETRIEVE_SURROUNDING_REPLY", "retrieve-surrounding-reply" },
        { NIMF_MESSAGE_DELETE_SURROUNDING, "NIMF_MESSAGE_DELETE_SURROUNDING", "delete-surrounding" },
        { NIMF_MESSAGE_DELETE_SURROUNDING_REPLY, "NIMF_MESSAGE_DELETE_SURROUNDING_REPLY", "delete-surrounding-reply" },
        { NIMF_MESSAGE_BEEP, "NIMF_MESSAGE_BEEP", "beep" },
        { NIMF_MESSAGE_BEEP_REPLY, "NIMF_MESSAGE_BEEP_REPLY", "beep-reply" },
        { NIMF_MESSAGE_START_INDICATOR, "NIMF_MESSAGE_START_INDICATOR", "start-indicator" },
        { NIMF_MESSAGE_START_INDICATOR_REPLY, "NIMF_MESSAGE_START_INDICATOR_REPLY", "start-indicator-reply" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NimfMessageType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

/* enumerations from "nimf-types.h" */
GType
nimf_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NIMF_ERROR_FAILED, "NIMF_ERROR_FAILED", "failed" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NimfError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

GType
nimf_modifier_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { NIMF_SHIFT_MASK, "NIMF_SHIFT_MASK", "<Shift>" },
        { NIMF_LOCK_MASK, "NIMF_LOCK_MASK", "<Lock>" },
        { NIMF_CONTROL_MASK, "NIMF_CONTROL_MASK", "<Control>" },
        { NIMF_MOD1_MASK, "NIMF_MOD1_MASK", "<Mod1>" },
        { NIMF_MOD2_MASK, "NIMF_MOD2_MASK", "<Mod2>" },
        { NIMF_MOD3_MASK, "NIMF_MOD3_MASK", "<Mod3>" },
        { NIMF_MOD4_MASK, "NIMF_MOD4_MASK", "<Mod4>" },
        { NIMF_MOD5_MASK, "NIMF_MOD5_MASK", "<Mod5>" },
        { NIMF_BUTTON1_MASK, "NIMF_BUTTON1_MASK", "<Button1>" },
        { NIMF_BUTTON2_MASK, "NIMF_BUTTON2_MASK", "<Button2>" },
        { NIMF_BUTTON3_MASK, "NIMF_BUTTON3_MASK", "<Button3>" },
        { NIMF_BUTTON4_MASK, "NIMF_BUTTON4_MASK", "<Button4>" },
        { NIMF_BUTTON5_MASK, "NIMF_BUTTON5_MASK", "<Button5>" },
        { NIMF_MODIFIER_RESERVED_13_MASK, "NIMF_MODIFIER_RESERVED_13_MASK", "reserved-13-mask" },
        { NIMF_MODIFIER_RESERVED_14_MASK, "NIMF_MODIFIER_RESERVED_14_MASK", "reserved-14-mask" },
        { NIMF_MODIFIER_RESERVED_15_MASK, "NIMF_MODIFIER_RESERVED_15_MASK", "reserved-15-mask" },
        { NIMF_MODIFIER_RESERVED_16_MASK, "NIMF_MODIFIER_RESERVED_16_MASK", "reserved-16-mask" },
        { NIMF_MODIFIER_RESERVED_17_MASK, "NIMF_MODIFIER_RESERVED_17_MASK", "reserved-17-mask" },
        { NIMF_MODIFIER_RESERVED_18_MASK, "NIMF_MODIFIER_RESERVED_18_MASK", "reserved-18-mask" },
        { NIMF_MODIFIER_RESERVED_19_MASK, "NIMF_MODIFIER_RESERVED_19_MASK", "reserved-19-mask" },
        { NIMF_MODIFIER_RESERVED_20_MASK, "NIMF_MODIFIER_RESERVED_20_MASK", "reserved-20-mask" },
        { NIMF_MODIFIER_RESERVED_21_MASK, "NIMF_MODIFIER_RESERVED_21_MASK", "reserved-21-mask" },
        { NIMF_MODIFIER_RESERVED_22_MASK, "NIMF_MODIFIER_RESERVED_22_MASK", "reserved-22-mask" },
        { NIMF_MODIFIER_RESERVED_23_MASK, "NIMF_MODIFIER_RESERVED_23_MASK", "reserved-23-mask" },
        { NIMF_MODIFIER_RESERVED_24_MASK, "NIMF_MODIFIER_RESERVED_24_MASK", "reserved-24-mask" },
        { NIMF_MODIFIER_RESERVED_25_MASK, "NIMF_MODIFIER_RESERVED_25_MASK", "reserved-25-mask" },
        { NIMF_SUPER_MASK, "NIMF_SUPER_MASK", "<Super>" },
        { NIMF_HYPER_MASK, "NIMF_HYPER_MASK", "<Hyper>" },
        { NIMF_META_MASK, "NIMF_META_MASK", "<Meta>" },
        { NIMF_MODIFIER_RESERVED_29_MASK, "NIMF_MODIFIER_RESERVED_29_MASK", "reserved-29-mask" },
        { NIMF_RELEASE_MASK, "NIMF_RELEASE_MASK", "<Release>" },
        { NIMF_MODIFIER_MASK, "NIMF_MODIFIER_MASK", "mask" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_flags_register_static (g_intern_static_string ("NimfModifierType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

GType
nimf_preedit_state_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NIMF_PREEDIT_STATE_START, "NIMF_PREEDIT_STATE_START", "start" },
        { NIMF_PREEDIT_STATE_END, "NIMF_PREEDIT_STATE_END", "end" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NimfPreeditState"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

GType
nimf_preedit_attr_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { NIMF_PREEDIT_ATTR_UNDERLINE, "NIMF_PREEDIT_ATTR_UNDERLINE", "underline" },
        { NIMF_PREEDIT_ATTR_HIGHLIGHT, "NIMF_PREEDIT_ATTR_HIGHLIGHT", "highlight" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("NimfPreeditAttrType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


/* Generated data ends here */

