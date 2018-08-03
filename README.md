# Build instructions for tdesktop client to compatible with nimf
This document is based on Telegram v1.3.10 version and nimf 2018.08.03 version.
## Build instructions for GYP/CMake under Ubuntu 16.04

### Create & Run docker container for build

    docker run -it --name "telegram-build" ubuntu:16.04 /bin/bash

### Prepare folder

Choose an empty folder for the future build, for example **/home/user/TBuild**. It will be named ***BuildPath*** in the rest of this document.

### Install software and required packages

You will need GCC 7.2 and CMake 3.2 installed. To install them and all the required dependencies run

    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo add-apt-repository ppa:george-edison55/cmake-3.x
    sudo apt-get update
    sudo apt-get install gcc-7 g++-7 cmake
    sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 60
    sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-7 60
    sudo add-apt-repository --remove ppa:ubuntu-toolchain-r/test
    sudo add-apt-repository --remove ppa:george-edison55/cmake-3.x
    sudo apt update
    sudo apt-get install software-properties-common


    sudo apt-get install git libexif-dev liblzma-dev libz-dev libssl-dev libappindicator-dev libunity-dev libicu-dev libdee-dev libdrm-dev dh-autoreconf autoconf automake build-essential libass-dev libfreetype6-dev libgpac-dev libsdl1.2-dev libtheora-dev libtool libva-dev libvdpau-dev libvorbis-dev libxcb1-dev libxcb-image0-dev libxcb-shm0-dev libxcb-xfixes0-dev libxcb-keysyms1-dev libxcb-icccm4-dev libxcb-render-util0-dev libxcb-util0-dev libxrender-dev libasound-dev libpulse-dev libxcb-sync0-dev libxcb-randr0-dev libx11-xcb-dev libffi-dev libncurses5-dev pkg-config texi2html zlib1g-dev yasm cmake xutils-dev bison python-xcbgen

You can set the multithreaded make parameter by running

    MAKE_THREADS_CNT=-j8

### Clone source code and prepare libraries

Go to ***BuildPath*** and run

    git clone --recursive https://github.com/telegramdesktop/tdesktop.git

    mkdir Libraries
    cd Libraries

    git clone https://github.com/ericniebler/range-v3

    git clone https://github.com/telegramdesktop/zlib.git
    cd zlib
    ./configure
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://github.com/xiph/opus
    cd opus
    git checkout v1.2.1
    ./autogen.sh
    ./configure
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://github.com/01org/libva.git
    cd libva
    ./autogen.sh --enable-static
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone git://anongit.freedesktop.org/vdpau/libvdpau
    cd libvdpau
    ./autogen.sh --enable-static
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://github.com/FFmpeg/FFmpeg.git ffmpeg
    cd ffmpeg
    git checkout release/3.4

    ./configure --prefix=/usr/local --disable-programs --disable-doc --disable-everything --enable-protocol=file --enable-libopus --enable-decoder=aac --enable-decoder=aac_latm --enable-decoder=aasc --enable-decoder=flac --enable-decoder=gif --enable-decoder=h264 --enable-decoder=h264_vdpau --enable-decoder=mp1 --enable-decoder=mp1float --enable-decoder=mp2 --enable-decoder=mp2float --enable-decoder=mp3 --enable-decoder=mp3adu --enable-decoder=mp3adufloat --enable-decoder=mp3float --enable-decoder=mp3on4 --enable-decoder=mp3on4float --enable-decoder=mpeg4 --enable-decoder=mpeg4_vdpau --enable-decoder=msmpeg4v2 --enable-decoder=msmpeg4v3 --enable-decoder=opus --enable-decoder=pcm_alaw --enable-decoder=pcm_alaw_at --enable-decoder=pcm_f32be --enable-decoder=pcm_f32le --enable-decoder=pcm_f64be --enable-decoder=pcm_f64le --enable-decoder=pcm_lxf --enable-decoder=pcm_mulaw --enable-decoder=pcm_mulaw_at --enable-decoder=pcm_s16be --enable-decoder=pcm_s16be_planar --enable-decoder=pcm_s16le --enable-decoder=pcm_s16le_planar --enable-decoder=pcm_s24be --enable-decoder=pcm_s24daud --enable-decoder=pcm_s24le --enable-decoder=pcm_s24le_planar --enable-decoder=pcm_s32be --enable-decoder=pcm_s32le --enable-decoder=pcm_s32le_planar --enable-decoder=pcm_s64be --enable-decoder=pcm_s64le --enable-decoder=pcm_s8 --enable-decoder=pcm_s8_planar --enable-decoder=pcm_u16be --enable-decoder=pcm_u16le --enable-decoder=pcm_u24be --enable-decoder=pcm_u24le --enable-decoder=pcm_u32be --enable-decoder=pcm_u32le --enable-decoder=pcm_u8 --enable-decoder=pcm_zork --enable-decoder=vorbis --enable-decoder=wavpack --enable-decoder=wmalossless --enable-decoder=wmapro --enable-decoder=wmav1 --enable-decoder=wmav2 --enable-decoder=wmavoice --enable-encoder=libopus --enable-hwaccel=h264_vaapi --enable-hwaccel=h264_vdpau --enable-hwaccel=mpeg4_vaapi --enable-hwaccel=mpeg4_vdpau --enable-parser=aac --enable-parser=aac_latm --enable-parser=flac --enable-parser=h264 --enable-parser=mpeg4video --enable-parser=mpegaudio --enable-parser=opus --enable-parser=vorbis --enable-demuxer=aac --enable-demuxer=flac --enable-demuxer=gif --enable-demuxer=h264 --enable-demuxer=mov --enable-demuxer=mp3 --enable-demuxer=ogg --enable-demuxer=wav --enable-muxer=ogg --enable-muxer=opus

    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://git.assembla.com/portaudio.git
    cd portaudio
    git checkout 396fe4b669
    ./configure
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone git://repo.or.cz/openal-soft.git
    cd openal-soft
    git checkout v1.18
    cd build
    cmake -D LIBTYPE:STRING=STATIC ..
    make $MAKE_THREADS_CNT
    sudo make install
    cd ../..

    git clone https://github.com/openssl/openssl
    cd openssl
    git checkout OpenSSL_1_0_2-stable
    ./config
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://github.com/xkbcommon/libxkbcommon.git
    cd libxkbcommon
    ./autogen.sh --disable-x11
    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone git://code.qt.io/qt/qt5.git qt5_6_2
    cd qt5_6_2
    perl init-repository --module-subset=qtbase,qtimageformats
    git checkout v5.6.2
    cd qtimageformats && git checkout v5.6.2 && cd ..
    cd qtbase && git checkout v5.6.2 && cd ..
    cd qtbase && git apply ../../../tdesktop/Telegram/Patches/qtbase_5_6_2.diff && cd ..
    cd qtbase/src/plugins/platforminputcontexts
    git clone https://github.com/telegramdesktop/fcitx.git
    git clone https://github.com/telegramdesktop/hime.git

#### Add nimf QT5 im module from github & change directory name

```
git clone https://github.com/5HARK/im-nimf-qt5
mv im-nimf-qt5 nimf
```

#### Add nimf plugin into platforminputcontexts.pro

```
cd ../
```
Modify the `platforminputcontexts.pro`
```
TEMPLATE = subdirs

qtHaveModule(dbus) {
# Patch: Adding fcitx/hime/nimf input context plugin to our static build.
!mac:!win32:SUBDIRS += ibus fcitx hime nimf
}

contains(QT_CONFIG, xcb-plugin): SUBDIRS += compose
```

### Continue to work on the rest
    # on path Libraries/qt5_6_2 
    cd ../../../..

    ./configure -prefix "/usr/local/tdesktop/Qt-5.6.2" -release -force-debug-info -opensource -confirm-license -qt-zlib -qt-libpng -qt-libjpeg -qt-freetype -qt-harfbuzz -qt-pcre -qt-xcb -qt-xkbcommon-x11 -no-opengl -no-gtkstyle -static -openssl-linked -nomake examples -nomake tests

    make $MAKE_THREADS_CNT
    sudo make install
    cd ..

    git clone https://chromium.googlesource.com/external/gyp
    cd gyp
    git checkout 702ac58e47
    git apply ../../tdesktop/Telegram/Patches/gyp.diff
    cd ..

    git clone https://chromium.googlesource.com/breakpad/breakpad
    cd breakpad
    git checkout bc8fb886
    git clone https://chromium.googlesource.com/linux-syscall-support src/third_party/lss
    cd src/third_party/lss
    git checkout a91633d1
    cd ../../..
    ./configure
    make $MAKE_THREADS_CNT
    sudo make install
    cd src/tools
    ../../../gyp/gyp  --depth=. --generator-output=.. -Goutput_dir=../out tools.gyp --format=cmake
    cd ../../out/Default
    cmake .
    make $MAKE_THREADS_CNT dump_syms
    cd ../../..

### Add static builded nimf Qt5 im plugin into qt_static_plugins.cpp
Modify the `tdesktop/Telegram/SourceFiles/qt_static_plugins.cpp`
```
--- a/Telegram/SourceFiles/qt_static_plugins.cpp
+++ b/Telegram/SourceFiles/qt_static_plugins.cpp
@@ -24,4 +24,5 @@ Q_IMPORT_PLUGIN(QComposePlatformInputContextPlugin)
 Q_IMPORT_PLUGIN(QIbusPlatformInputContextPlugin)
 Q_IMPORT_PLUGIN(QFcitxPlatformInputContextPlugin)
 Q_IMPORT_PLUGIN(QHimePlatformInputContextPlugin)
+Q_IMPORT_PLUGIN(QNimfPlatformInputContextPlugin)
 #endif // Q_OS_WIN | Q_OS_MAC | Q_OS_LINUX
```

Modify the `tdesktop/Telegram/gyp/telegram_linux.gypi`
```
--- a/Telegram/gyp/telegram_linux.gypi
+++ b/Telegram/gyp/telegram_linux.gypi
@@ -48,6 +48,10 @@
       'ibusplatforminputcontextplugin',
       'fcitxplatforminputcontextplugin',
       'himeplatforminputcontextplugin',
+      'nimfplatforminputcontextplugin',
+      'audit',
+      'gio-2.0',
+      'gobject-2.0',
       'liblzma.a',
       'libopenal.a',
       'libavformat.a',
```

### Building the project

Go to ***BuildPath*/tdesktop/Telegram** and run

    gyp/refresh.sh

To make Debug version go to ***BuildPath*/tdesktop/out/Debug** and run

    make $MAKE_THREADS_CNT

To make Release version go to ***BuildPath*/tdesktop/out/Release** and run

    make $MAKE_THREADS_CNT

You can debug your builds from Qt Creator, just open **CMakeLists.txt** from ***BuildPath*/tdesktop/out/Debug** and launch with debug.

## Reference
https://gitlab.com/nimf-i18n/nimf/blob/master/README

https://gitlab.com/nimf-i18n/nimf/issues/16

https://github.com/telegramdesktop/tdesktop/blob/dev/docs/building-cmake.md
