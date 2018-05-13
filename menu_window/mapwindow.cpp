#include "mapwindow.h"
#include "ui_mapwindow.h"

//MAP WINDOW CONSTRUCTOR========================================================
MapWindow::MapWindow(QWidget *parent) : QDialog(parent), ui(new Ui::MapWindow) {

    ui->setupUi(this);

    //This makes the background the image specified below-----------------------
    QPixmap background("/home/colt/Desktop/Not CPSC/DNDHelper/map_texture/map.pbm");
    QPalette background_palette;
    background_palette.setBrush(QPalette::Background, background);
    this->setPalette(background_palette);
    //--------------------------------------------------------------------------

    //What the buttons will look like.
    QString style_sheet_info = "background-color: rgba(255, 255, 255, 0);";

    //I know, I know. This is horrible. I'll think of something better eventually.
    ui->stoneDistrictButton->setStyleSheet           (style_sheet_info);
    ui->northDistrictButton->setStyleSheet           (style_sheet_info);
    ui->lowerWestDistrictButton->setStyleSheet       (style_sheet_info);
    ui->borderDistrictButton->setStyleSheet          (style_sheet_info);
    ui->capitalDistrictButton->setStyleSheet         (style_sheet_info);
    ui->southMarketDistrictButton->setStyleSheet     (style_sheet_info);
    ui->bernardDistrictButton->setStyleSheet         (style_sheet_info);
    ui->stAbrahamDistrictButton->setStyleSheet       (style_sheet_info);
    ui->capitalMausoleumDistrictButton->setStyleSheet(style_sheet_info);
    ui->churchOfAnneDistrictButton->setStyleSheet    (style_sheet_info);
    ui->flowerSquareDistrictButton->setStyleSheet    (style_sheet_info);
    ui->northMarketDistrictButton->setStyleSheet     (style_sheet_info);
    ui->seaDistrictButton->setStyleSheet             (style_sheet_info);
    ui->hotelDistrictButton->setStyleSheet           (style_sheet_info);
    ui->blueDistrictButton->setStyleSheet            (style_sheet_info);
    ui->baxterTheatreDistrictButton->setStyleSheet   (style_sheet_info);
    ui->centralMarketDistrictButton->setStyleSheet   (style_sheet_info);
    ui->southFisheryDistrictButton->setStyleSheet    (style_sheet_info);
    ui->damenDistrictButton->setStyleSheet           (style_sheet_info);
    ui->fisheryDistrictButton->setStyleSheet         (style_sheet_info);
    ui->eastADistrictButton->setStyleSheet           (style_sheet_info);
    ui->eastBDistrictButton->setStyleSheet           (style_sheet_info);
    ui->northFisheryDistrictButton->setStyleSheet    (style_sheet_info);
    ui->eastFisheryDistrictButton->setStyleSheet     (style_sheet_info);
    ui->steamMinesDistrictButton->setStyleSheet      (style_sheet_info);

    //This gives the districts values.
    initializeDistricts(this->districts);

}

MapWindow::~MapWindow(){

    delete ui;
}

void MapWindow::on_stoneDistrictButton_clicked() {

    //Setting up all the information needed for DistrictMap constructor call.
    QString qstr_flavor_text = QString::fromStdString(this->districts[0]->flavorText());
    DistrictMap stone_district(0,                 //district number
                               813,               //image width
                               600,               //image height
                               10,                 //label container for text's x
                               10,                 //label container for text's y
                               qstr_flavor_text); //text

    //Don't know why this is necessary. RIP.
    stone_district.setModal(true);

    //Execute the button.
    stone_district.exec();
}

void MapWindow::initializeDistricts  (vector<District*>& districts) {

    //Creates the vector that stores all the district objects.
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
