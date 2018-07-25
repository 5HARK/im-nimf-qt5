#!/bin/sh
LD_LIBRARY_PATH=/root/Libraries/qt5_6_2/qtbase/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/root/Libraries/qt5_6_2/qtbase/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec /root/Libraries/qt5_6_2/qtbase/bin/qdbusxml2cpp "$@"
