/********************************************************************************
** Form generated from reading UI file 'scoreboard_shower.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_SHOWER_H
#define UI_SCOREBOARD_SHOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Scoreboard_Shower
{
public:

    void setupUi(QDialog *Scoreboard_Shower)
    {
        if (Scoreboard_Shower->objectName().isEmpty())
            Scoreboard_Shower->setObjectName(QStringLiteral("Scoreboard_Shower"));
        Scoreboard_Shower->resize(556, 411);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Scoreboard_Shower->sizePolicy().hasHeightForWidth());
        Scoreboard_Shower->setSizePolicy(sizePolicy);

        retranslateUi(Scoreboard_Shower);

        QMetaObject::connectSlotsByName(Scoreboard_Shower);
    } // setupUi

    void retranslateUi(QDialog *Scoreboard_Shower)
    {
        Scoreboard_Shower->setWindowTitle(QApplication::translate("Scoreboard_Shower", "Scoreboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scoreboard_Shower: public Ui_Scoreboard_Shower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_SHOWER_H
