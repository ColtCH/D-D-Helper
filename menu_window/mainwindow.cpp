#include "mainwindow.h"
#include "ui_mainwindow.h"

//MAIN WINDOW CONSTRUCTOR=======================================================
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);
    this->setWindowTitle("D&D Helper");
}

MainWindow::~MainWindow() {

    delete ui;
}

void MainWindow::on_exit_button_clicked() {

    close(); //Pretty straight forward.
}

void MainWindow::on_dev_info_button_clicked() {

    //Displays a message box with some development info.
    QMessageBox::information(this, "Development Information", "D&D Helper V.03");
}

void MainWindow::on_start_button_clicked() {

    //Hide the current window.
    this->hide();

    //Construct the mapwindow.
    MapWindow mapwindow;
    mapwindow.setModal(true);
    mapwindow.exec();
}
