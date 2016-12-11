#-------------------------------------------------
#
# Project created by QtCreator 2016-12-11T12:09:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testsysfs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sysfsgpio.cpp

HEADERS  += mainwindow.h \
    sysfsgpio.h

FORMS    += mainwindow.ui
