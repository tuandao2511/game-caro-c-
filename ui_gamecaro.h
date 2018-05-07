/********************************************************************************
** Form generated from reading UI file 'gamecaro.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECARO_H
#define UI_GAMECARO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_GameCaro
{
public:

    void setupUi(QDialog *GameCaro)
    {
        if (GameCaro->objectName().isEmpty())
            GameCaro->setObjectName(QString::fromUtf8("GameCaro"));
        GameCaro->resize(501, 501);

        retranslateUi(GameCaro);

        QMetaObject::connectSlotsByName(GameCaro);
    } // setupUi

    void retranslateUi(QDialog *GameCaro)
    {
        GameCaro->setWindowTitle(QApplication::translate("GameCaro", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GameCaro: public Ui_GameCaro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECARO_H
