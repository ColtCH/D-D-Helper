#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/*
================================================================================
Main Window that contains three buttons: an exit application button, a button
that lists some development information, and the button that takes you to the
map window.
================================================================================
*/

//Q INCLUDES--------------
#include <QMainWindow>
#include <QMessageBox>

//ETC INCLUDES------------
#include "mapwindow.h"

namespace Ui {
class MainWindow;
}

//MAINWINDOW===========================
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_exit_button_clicked();     //Exit button.

    void on_dev_info_button_clicked(); //Dev Info button.

    void on_start_button_clicked();    //Start button.

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
