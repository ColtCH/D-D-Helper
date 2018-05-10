#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "mapwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_exit_button_clicked();

    void on_dev_info_button_clicked();

    void on_start_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H