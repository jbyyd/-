/********************************************************************************
** Form generated from reading UI file 'stuinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUINFO_H
#define UI_STUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stuinfo
{
public:
    QPushButton *findButton;
    QPushButton *addButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *delSelectedButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *addNameLineEdit;
    QSpinBox *spinBox_y;
    QLabel *label_5;
    QSpinBox *spinBox_m;
    QLabel *label_6;
    QSpinBox *spinBox_d;
    QLabel *label_7;
    QLineEdit *nationalityEdit;
    QLineEdit *sexEdit;
    QLineEdit *phoneEdit;
    QLineEdit *gradeEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *id_f;
    QLineEdit *name_f;
    QLineEdit *birth_f;
    QLineEdit *nationality_f;
    QLineEdit *sex_f;
    QLineEdit *phone_f;
    QLineEdit *grade_f;

    void setupUi(QWidget *stuinfo)
    {
        if (stuinfo->objectName().isEmpty())
            stuinfo->setObjectName(QString::fromUtf8("stuinfo"));
        stuinfo->resize(835, 300);
        findButton = new QPushButton(stuinfo);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(680, 190, 80, 16));
        addButton = new QPushButton(stuinfo);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(680, 260, 80, 16));
        scrollArea = new QScrollArea(stuinfo);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 821, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 819, 119));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(stuinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 180, 41, 9));
        label_2 = new QLabel(stuinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 180, 41, 9));
        label_3 = new QLabel(stuinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 180, 41, 9));
        label_4 = new QLabel(stuinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 240, 41, 9));
        delSelectedButton = new QPushButton(stuinfo);
        delSelectedButton->setObjectName(QString::fromUtf8("delSelectedButton"));
        delSelectedButton->setGeometry(QRect(750, 150, 80, 15));
        label_8 = new QLabel(stuinfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 180, 41, 9));
        label_9 = new QLabel(stuinfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(410, 180, 41, 9));
        label_10 = new QLabel(stuinfo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(510, 180, 41, 9));
        label_11 = new QLabel(stuinfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(600, 180, 41, 9));
        label_16 = new QLabel(stuinfo);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(610, 240, 41, 9));
        label_17 = new QLabel(stuinfo);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(420, 240, 41, 9));
        label_18 = new QLabel(stuinfo);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(520, 240, 41, 9));
        label_19 = new QLabel(stuinfo);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(330, 240, 41, 9));
        widget = new QWidget(stuinfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 260, 653, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addNameLineEdit = new QLineEdit(widget);
        addNameLineEdit->setObjectName(QString::fromUtf8("addNameLineEdit"));

        horizontalLayout->addWidget(addNameLineEdit);

        spinBox_y = new QSpinBox(widget);
        spinBox_y->setObjectName(QString::fromUtf8("spinBox_y"));
        spinBox_y->setMinimum(1900);
        spinBox_y->setMaximum(2025);

        horizontalLayout->addWidget(spinBox_y);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        spinBox_m = new QSpinBox(widget);
        spinBox_m->setObjectName(QString::fromUtf8("spinBox_m"));
        spinBox_m->setMinimum(1);
        spinBox_m->setMaximum(12);

        horizontalLayout->addWidget(spinBox_m);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        spinBox_d = new QSpinBox(widget);
        spinBox_d->setObjectName(QString::fromUtf8("spinBox_d"));
        spinBox_d->setMinimum(1);
        spinBox_d->setMaximum(31);

        horizontalLayout->addWidget(spinBox_d);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        nationalityEdit = new QLineEdit(widget);
        nationalityEdit->setObjectName(QString::fromUtf8("nationalityEdit"));

        horizontalLayout->addWidget(nationalityEdit);

        sexEdit = new QLineEdit(widget);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));

        horizontalLayout->addWidget(sexEdit);

        phoneEdit = new QLineEdit(widget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));

        horizontalLayout->addWidget(phoneEdit);

        gradeEdit = new QLineEdit(widget);
        gradeEdit->setObjectName(QString::fromUtf8("gradeEdit"));

        horizontalLayout->addWidget(gradeEdit);

        widget1 = new QWidget(stuinfo);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 190, 663, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        id_f = new QLineEdit(widget1);
        id_f->setObjectName(QString::fromUtf8("id_f"));

        horizontalLayout_2->addWidget(id_f);

        name_f = new QLineEdit(widget1);
        name_f->setObjectName(QString::fromUtf8("name_f"));

        horizontalLayout_2->addWidget(name_f);

        birth_f = new QLineEdit(widget1);
        birth_f->setObjectName(QString::fromUtf8("birth_f"));

        horizontalLayout_2->addWidget(birth_f);

        nationality_f = new QLineEdit(widget1);
        nationality_f->setObjectName(QString::fromUtf8("nationality_f"));

        horizontalLayout_2->addWidget(nationality_f);

        sex_f = new QLineEdit(widget1);
        sex_f->setObjectName(QString::fromUtf8("sex_f"));

        horizontalLayout_2->addWidget(sex_f);

        phone_f = new QLineEdit(widget1);
        phone_f->setObjectName(QString::fromUtf8("phone_f"));

        horizontalLayout_2->addWidget(phone_f);

        grade_f = new QLineEdit(widget1);
        grade_f->setObjectName(QString::fromUtf8("grade_f"));

        horizontalLayout_2->addWidget(grade_f);


        retranslateUi(stuinfo);

        QMetaObject::connectSlotsByName(stuinfo);
    } // setupUi

    void retranslateUi(QWidget *stuinfo)
    {
        stuinfo->setWindowTitle(QApplication::translate("stuinfo", "Form", nullptr));
        findButton->setText(QApplication::translate("stuinfo", "\346\237\245\346\211\276", nullptr));
        addButton->setText(QApplication::translate("stuinfo", "\346\226\260\345\242\236", nullptr));
        label->setText(QApplication::translate("stuinfo", "<html><head/><body><p align=\"center\">id</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("stuinfo", "<html><head/><body><p align=\"center\">\345\247\223\345\220\215</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("stuinfo", "<html><head/><body><p align=\"center\">\345\207\272\347\224\237\346\227\245\346\234\237</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("stuinfo", "<html><head/><body><p align=\"center\">\345\247\223\345\220\215</p></body></html>", nullptr));
        delSelectedButton->setText(QApplication::translate("stuinfo", "\345\210\240\351\231\244\351\200\211\344\270\255\350\256\260\345\275\225", nullptr));
        label_8->setText(QApplication::translate("stuinfo", "\346\260\221\346\227\217", nullptr));
        label_9->setText(QApplication::translate("stuinfo", "\346\200\247\345\210\253", nullptr));
        label_10->setText(QApplication::translate("stuinfo", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_11->setText(QApplication::translate("stuinfo", "\345\271\264\347\272\247", nullptr));
        label_16->setText(QApplication::translate("stuinfo", "\345\271\264\347\272\247", nullptr));
        label_17->setText(QApplication::translate("stuinfo", "\346\200\247\345\210\253", nullptr));
        label_18->setText(QApplication::translate("stuinfo", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_19->setText(QApplication::translate("stuinfo", "\346\260\221\346\227\217", nullptr));
        label_5->setText(QApplication::translate("stuinfo", "\345\271\264", nullptr));
        label_6->setText(QApplication::translate("stuinfo", "\346\234\210", nullptr));
        label_7->setText(QApplication::translate("stuinfo", "\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stuinfo: public Ui_stuinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUINFO_H
