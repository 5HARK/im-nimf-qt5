TARGET = nimfplatforminputcontextplugin

QT += dbus gui-private

SOURCES += $$PWD/im-nimf-qt5.cpp

HEADERS += $$PWD/nimf-enum-types.h \
           $$PWD/nimf-events.h \
           $$PWD/nimf-im.h \
           $$PWD/nimf-key-syms.h \
           $$PWD/nimf-marshalers.h \
           $$PWD/nimf-types.h

DEFINES += NIMF_COMPILATION USE_DLFCN

OTHER_FILES += $$PWD/nimf.json

CONFIG += link_pkgconfig no_keywords

PKGCONFIG += glib-2.0

PLUGIN_TYPE = platforminputcontexts
PLUGIN_EXTENDS = -
PLUGIN_CLASS_NAME = NimfInputContext
load(qt_plugin)
