#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QDialog>
#include <QPixmap>
#include <QPalette>
#include <QBrush>

namespace Ui {
class MapWindow;
}

class MapWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();

private:
    Ui::MapWindow *ui;
};

#endif // MAPWINDOW_H
