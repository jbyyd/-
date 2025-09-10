/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *addnamelineEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpinBox *spinBox_y;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_m;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox_d;
    QPushButton *addButton;
    QPushButton *exitButton;

    void setupUi(QWidget *AddStu)
    {
        if (AddStu->objectName().isEmpty())
            AddStu->setObjectName(QString::fromUtf8("AddStu"));
        AddStu->resize(400, 300);
        widget = new QWidget(AddStu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(92, 70, 237, 94));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        addnamelineEdit = new QLineEdit(widget);
        addnamelineEdit->setObjectName(QString::fromUtf8("addnamelineEdit"));

        verticalLayout_4->addWidget(addnamelineEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        spinBox_y = new QSpinBox(widget);
        spinBox_y->setObjectName(QString::fromUtf8("spinBox_y"));
        spinBox_y->setMinimum(2010);
        spinBox_y->setMaximum(2025);

        verticalLayout->addWidget(spinBox_y);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        spinBox_m = new QSpinBox(widget);
        spinBox_m->setObjectName(QString::fromUtf8("spinBox_m"));
        spinBox_m->setMinimum(1);
        spinBox_m->setMaximum(12);

        verticalLayout_2->addWidget(spinBox_m);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        spinBox_d = new QSpinBox(widget);
        spinBox_d->setObjectName(QString::fromUtf8("spinBox_d"));
        spinBox_d->setMinimum(1);
        spinBox_d->setMaximum(31);

        verticalLayout_3->addWidget(spinBox_d);


        horizontalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout_5->addWidget(addButton);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        verticalLayout_5->addWidget(exitButton);


        retranslateUi(AddStu);

        QMetaObject::connectSlotsByName(AddStu);
    } // setupUi

    void retranslateUi(QWidget *AddStu)
    {
        AddStu->setWindowTitle(QApplication::translate("AddStu", "Form", nullptr));
        label_2->setText(QApplication::translate("AddStu", "<html><head/><body><p align=\"center\">\345\220\215\345\255\227</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("AddStu", "<html><head/><body><p align=\"center\">\345\271\264</p></body></html>", nullptr));
        label->setText(QApplication::translate("AddStu", "<html><head/><body><p align=\"center\">\346\234\210</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("AddStu", "<html><head/><body><p align=\"center\">\346\227\245</p></body></html>", nullptr));
        addButton->setText(QApplication::translate("AddStu", "\346\267\273\345\212\240", nullptr));
        exitButton->setText(QApplication::translate("AddStu", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStu: public Ui_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
