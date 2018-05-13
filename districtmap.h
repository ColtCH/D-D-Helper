#ifndef DISTRICTMAP_H
#define DISTRICTMAP_H

#include <QDialog>

namespace Ui {
class districtmap;
}

class districtmap : public QDialog
{
    Q_OBJECT

public:
    explicit districtmap(QWidget *parent = 0);
    ~districtmap();

private:
    Ui::districtmap *ui;
};

#endif // DISTRICTMAP_H
