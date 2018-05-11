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


    initializeDistricts(this->districts);

}

MapWindow::~MapWindow()
{
    delete ui;
}

void MapWindow::on_stoneDistrictButton_clicked()
{
    QString qstr = QString::fromStdString(this->districts[0]->flavorText());
    QMessageBox::information(this, "Stone District", qstr);
}

void MapWindow::initializeDistricts  (vector<District*>& districts){

    districts.push_back( new StoneDistrict           () );
    districts.push_back( new LowerWestDistrict       () );
    districts.push_back( new BorderDistrict          () );
    districts.push_back( new NorthDistrict           () );
    districts.push_back( new SouthMarketDistrict     () );
    districts.push_back( new CapitalDistrict         () );
    districts.push_back( new BernardDistrict         () );
    districts.push_back( new CapitalMausoleumDistrict() );
    districts.push_back( new StAbrahamDistrict       () );
    districts.push_back( new ChurchOfAnneDistrict    () );
    districts.push_back( new FlowerSquareDistrict    () );
    districts.push_back( new NorthMarketDistrict     () );
    districts.push_back( new SouthFisheryDistrict    () );
    districts.push_back( new CentralMarketDistrict   () );
    districts.push_back( new HotelDistrict           () );
    districts.push_back( new SeaDistrict             () );
    districts.push_back( new DamenDistrict           () );
    districts.push_back( new BaxterTheatreDistrict   () );
    districts.push_back( new BlueDistrict            () );
    districts.push_back( new FisheryDistrict         () );
    districts.push_back( new EastADistrict           () );
    districts.push_back( new EastBDistrict           () );
    districts.push_back( new NorthFisheryDistrict    () );
    districts.push_back( new EastFisheryDistrict     () );
    districts.push_back( new SteamMinesDistrict      () );
}
