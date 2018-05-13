#-------------------------------------------------
# Project created by QtCreator 2018-05-09T12:39:54
# QMake is a really useful tool. Didn't have to
# write an impressively long Makefile!
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DNDHLPR
TEMPLATE = app

#SOURCES---------------------------------
SOURCES += main.cpp
SOURCES += menu_window/mainwindow.cpp
SOURCES += menu_window/mapwindow.cpp
SOURCES += menu_window/districtmap.cpp
SOURCES += district/*

#HEADERS---------------------------------
HEADERS += menu_window/mainwindow.h
HEADERS += menu_window/mapwindow.h
HEADERS += menu_window/districtmap.h

#FORMS-----------------------------------
FORMS   += menu_window/mainwindow.ui
FORMS   += menu_window/mapwindow.ui
FORMS   += menu_window/districtmap.ui


#This code below puts the ".o" files and the executable into a separate file.

release: DESTDIR = build/release
debug:   DESTDIR = build/debug

OBJECTS_DIR = $$DESTDIR/.obj
MOC_DIR = $$DESTDIR/.moc
RCC_DIR = $$DESTDIR/.qrc
UI_DIR = $$DESTDIR/.ui
O_DIR = $$DESTDIR/.o
