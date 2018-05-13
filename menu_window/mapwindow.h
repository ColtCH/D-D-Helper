#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QDialog>
#include <QPixmap>
#include <QPalette>
#include <QBrush>
#include <QMessageBox>
#include <QString>

#include "init.h"
#include "districtmap.h"

#include <vector>

using namespace std;

namespace Ui {
class MapWindow;
}

class MapWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();

    void initializeDistricts  (vector<District*>& districts);

private slots:
    void on_stoneDistrictButton_clicked();

private:
    Ui::MapWindow *ui;
    vector<District*> districts;
};

#endif // MAPWINDOW_H
