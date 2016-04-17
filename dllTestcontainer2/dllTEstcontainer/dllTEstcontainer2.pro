#-------------------------------------------------
#
# Project created by QtCreator 2016-04-16T16:27:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dllTEstcontainer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    uidll2_global.h

FORMS    += mainwindow.ui


win32: LIBS += -L$$PWD/../../uiDll2/build-uiDll2-Desktop_Qt_5_5_0_MSVC2013_64bit-Debug/debug/ -luiDll2

INCLUDEPATH += $$PWD/../../uiDll2/uiDll2
DEPENDPATH += $$PWD/../../uiDll2/uiDll2
