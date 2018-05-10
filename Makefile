SRCS := district/* init.cpp mainwindow.cpp
TARG := dnd
FLAG := -std=c++11 -Wall
COMP := g++
LINK := -m64 -Wl,-O1 -L/usr/X11R6/lib64 -lQt5Gui -lQt5Core -lGL -lpthread
QT   += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

make:
	$(COMP) $(SRCS) $(FLAG) -o $(TARG) $(LINK)

run:
	./$(TARG)
