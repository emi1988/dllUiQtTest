#-------------------------------------------------
#
# Project created by QtCreator 2016-04-17T11:51:03
#
#-------------------------------------------------

QT       += widgets

TARGET = uiDll2
TEMPLATE = lib

DEFINES += UIDLL2_LIBRARY

SOURCES += uidll2.cpp \
    formdll.cpp

HEADERS += uidll2.h\
        uidll2_global.h \
    formdll.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    formdll.ui
