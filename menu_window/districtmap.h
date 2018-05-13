#ifndef DISTRICTMAP_H
#define DISTRICTMAP_H

/*
================================================================================
District map is what pops up whenever a district button is pressed on the
map window.
================================================================================
*/

//Q INCLUDES------------
#include <QDialog>
#include <QMessageBox>
#include <QLabel>
#include <QFont>

//ETC INCLUDES----------
#include <sstream>


//Not sure why QT needs the namespace Ui, but at this point I'm too afraid to ask.
namespace Ui {
class DistrictMap;
}

//DISRICTMAP========================
class DistrictMap : public QDialog
{
    Q_OBJECT

public:

    explicit DistrictMap(int district_number,  //Needed to get correct map.
                         QString flavor_text,  //Text that will be dumped into label.
                         QWidget *parent = 0); //What it gets bounded to.

    ~DistrictMap(); //Not very necessary in this case.

private:
    Ui::DistrictMap *ui;
};

#endif // DISTRICTMAP_H
