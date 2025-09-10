/********************************************************************************
** Form generated from reading UI file 'findstu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSTU_H
#define UI_FINDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findstu
{
public:
    QPushButton *exitButton;

    void setupUi(QWidget *findstu)
    {
        if (findstu->objectName().isEmpty())
            findstu->setObjectName(QString::fromUtf8("findstu"));
        findstu->resize(630, 300);
        findstu->setAutoFillBackground(false);
        exitButton = new QPushButton(findstu);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(260, 220, 80, 15));

        retranslateUi(findstu);

        QMetaObject::connectSlotsByName(findstu);
    } // setupUi

    void retranslateUi(QWidget *findstu)
    {
        findstu->setWindowTitle(QApplication::translate("findstu", "Form", nullptr));
        exitButton->setText(QApplication::translate("findstu", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findstu: public Ui_findstu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSTU_H
