#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapWindow)
{
    ui->setupUi(this);
    QPixmap background("/home/colt/Desktop/Not CPSC/QT/MessageBox/Messages/map_texture/map.pbm");
    QPalette background_palette;
    background_palette.setBrush(QPalette::Background, background);
    this->setPalette(background_palette);
    ui->stoneDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->northDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->lowerWestDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->borderDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->capitalDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->southMarketDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->bernardDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->stAbrahamDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->capitalMausoleumDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->churchOfAnneDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->flowerSquareDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->northMarketDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->seaDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->hotelDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->blueDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->baxterTheatreDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->centralMarketDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->southFisheryDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->damenDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->fisheryDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->eastADistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->eastBDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->northFisheryDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->eastFisheryDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->steamMinesDistrictButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");




}

MapWindow::~MapWindow()
{
    delete ui;
}
