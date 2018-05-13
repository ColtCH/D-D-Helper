#include "districtmap.h"
#include "ui_districtmap.h"

districtmap::districtmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::districtmap)
{
    ui->setupUi(this);
}

districtmap::~districtmap()
{
    delete ui;
}
