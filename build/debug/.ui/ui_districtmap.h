/********************************************************************************
** Form generated from reading UI file 'districtmap.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRICTMAP_H
#define UI_DISTRICTMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_districtmap
{
public:

    void setupUi(QDialog *districtmap)
    {
        if (districtmap->objectName().isEmpty())
            districtmap->setObjectName(QStringLiteral("districtmap"));
        districtmap->resize(400, 300);

        retranslateUi(districtmap);

        QMetaObject::connectSlotsByName(districtmap);
    } // setupUi

    void retranslateUi(QDialog *districtmap)
    {
        districtmap->setWindowTitle(QApplication::translate("districtmap", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class districtmap: public Ui_districtmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRICTMAP_H
