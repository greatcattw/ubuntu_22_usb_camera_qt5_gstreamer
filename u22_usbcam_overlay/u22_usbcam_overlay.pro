QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gcatlib.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    gcatlib.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

PKGCONFIG += \
    gstreamer-1.0 \
    gstreamer-base-1.0 \
    glib-2.0

INCLUDEPATH += \
    /usr/include/glib-2.0 \
    /usr/lib/x86_64-linux-gnu/glib-2.0/include \
    /usr/include/gstreamer-1.0 \
    /usr/lib/x86_64-linux-gnu/gstreamer-1.0/include

LIBS += \
    -L/usr/lib/x86_64-linux-gnu/gstreamer-1.0 \
    -lgstreamer-1.0 \
    -lgobject-2.0 \
    -lglib-2.0 \
    -lgstvideo-1.0 \
    -lgstqt5videosink

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
