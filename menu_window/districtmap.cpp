#include "districtmap.h"
#include "ui_districtmap.h"

//DISTRICT MAP CONSTRUCTOR======================================================
DistrictMap::DistrictMap(int district_number,
                         QString flavor_text,
                         QWidget *parent) :
                         QDialog(parent) {

    //Stringstream to build the file name of the correct image.
    std::stringstream district_art_file_name;
    district_art_file_name << "/home/colt/Desktop/Not CPSC/DNDHelper/map_texture/district_art/district_art_"
                           << district_number
                           << ".png";

    //Convert the string output to a QString.
    QString qstr_district_art_file_name = QString::fromStdString(district_art_file_name.str());

    //Convert the image into a QPixmap.
    QPixmap background(qstr_district_art_file_name);
    QPalette background_palette;

    //Use QPalette to paint the background onto the window.
    background_palette.setBrush(QPalette::Background, background);
    this->setPalette(background_palette);
    this->setGeometry(QRect(10,10,813,600)); //need static dimensions.

    QFont label_font("Arial", 15, QFont::Bold);

    //Label that stores all the flavor text.
    QLabel *flavor_text_container = new QLabel(this);
    flavor_text_container->setFont(label_font);
    flavor_text_container->setStyleSheet("QLabel { color: white; }");
    flavor_text_container->setText(flavor_text);
}

DistrictMap::~DistrictMap(){} //not sure what to put here yet.
