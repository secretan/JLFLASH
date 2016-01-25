#-------------------------------------------------
#
# Project created by QtCreator 2016-01-23T08:50:25
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JLFLASH
TEMPLATE = app


SOURCES += main.cpp\
        jlwidget.cpp \
    jlserialthread.cpp

HEADERS  += jlwidget.h \
    jlserialthread.h

FORMS    += jlwidget.ui
