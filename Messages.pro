#-------------------------------------------------
#
# Project created by QtCreator 2018-05-09T12:39:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Messages
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mapwindow.cpp

SOURCES += district/*

HEADERS  += mainwindow.h \
    mapwindow.h

FORMS    += mainwindow.ui \
    mapwindow.ui

release: DESTDIR = build/release
debug:   DESTDIR = build/debug

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui
O_DIR = $$DESTDIR/.o