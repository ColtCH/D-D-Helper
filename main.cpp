#include "menu_window/mainwindow.h"
#include <QApplication>
/*
================================================================================
Using QT, main is incredibly uneventful. All event handling is in various files
stored inside of "menu_window/".

For the headers, we need <QApplication> to call the constructor for our app, and
we need "menu_window/mainwindow.h" in order to call the constructor for our
window.
================================================================================
*/

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec(); //Interesting aspect of QT. We return the exec() command.
}
