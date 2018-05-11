#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("D&D Helper");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_button_clicked()
{
    close();
}

void MainWindow::on_dev_info_button_clicked()
{
    QMessageBox::information(this, "Development Information", "D&D Helper V.03");
}

void MainWindow::on_start_button_clicked()
{
    this->hide();
    MapWindow mapwindow;
    mapwindow.setModal(true);
    mapwindow.exec();
}
