#-------------------------------------------------
#
# Project created by QtCreator 2015-09-17T13:56:50
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LaunchPad
TEMPLATE = app
RC_FILE = icon.rc


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RESOURCES += \
    res.qrc
