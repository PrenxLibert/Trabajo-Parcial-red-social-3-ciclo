/********************************************************************************
** Form generated from reading UI file 'redsocial.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDSOCIAL_H
#define UI_REDSOCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedSocial
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *tbxName;
    QLineEdit *tbxLastName;
    QLineEdit *tbxOld;
    QLineEdit *tbxUser;
    QLineEdit *tbxPss;
    QLineEdit *tbxCPss;
    QCheckBox *checkBox;
    QPushButton *btnReg;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *tbxLUser;
    QLineEdit *tbxLPss;
    QPushButton *btnLog;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RedSocial)
    {
        if (RedSocial->objectName().isEmpty())
            RedSocial->setObjectName(QString::fromUtf8("RedSocial"));
        RedSocial->resize(800, 600);
        centralwidget = new QWidget(RedSocial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 51, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 91, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 130, 31, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 91, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 190, 81, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 230, 81, 21));
        tbxName = new QLineEdit(centralwidget);
        tbxName->setObjectName(QString::fromUtf8("tbxName"));
        tbxName->setGeometry(QRect(120, 60, 113, 20));
        tbxLastName = new QLineEdit(centralwidget);
        tbxLastName->setObjectName(QString::fromUtf8("tbxLastName"));
        tbxLastName->setGeometry(QRect(120, 100, 113, 20));
        tbxOld = new QLineEdit(centralwidget);
        tbxOld->setObjectName(QString::fromUtf8("tbxOld"));
        tbxOld->setGeometry(QRect(120, 130, 113, 20));
        tbxUser = new QLineEdit(centralwidget);
        tbxUser->setObjectName(QString::fromUtf8("tbxUser"));
        tbxUser->setGeometry(QRect(120, 160, 113, 20));
        tbxPss = new QLineEdit(centralwidget);
        tbxPss->setObjectName(QString::fromUtf8("tbxPss"));
        tbxPss->setGeometry(QRect(120, 190, 113, 20));
        tbxCPss = new QLineEdit(centralwidget);
        tbxCPss->setObjectName(QString::fromUtf8("tbxCPss"));
        tbxCPss->setGeometry(QRect(120, 230, 113, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(130, 270, 70, 17));
        btnReg = new QPushButton(centralwidget);
        btnReg->setObjectName(QString::fromUtf8("btnReg"));
        btnReg->setGeometry(QRect(140, 300, 75, 23));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 10, 121, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 10, 71, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 50, 111, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 90, 81, 21));
        tbxLUser = new QLineEdit(centralwidget);
        tbxLUser->setObjectName(QString::fromUtf8("tbxLUser"));
        tbxLUser->setGeometry(QRect(410, 60, 121, 20));
        tbxLPss = new QLineEdit(centralwidget);
        tbxLPss->setObjectName(QString::fromUtf8("tbxLPss"));
        tbxLPss->setGeometry(QRect(410, 90, 121, 20));
        btnLog = new QPushButton(centralwidget);
        btnLog->setObjectName(QString::fromUtf8("btnLog"));
        btnLog->setGeometry(QRect(430, 140, 75, 23));
        RedSocial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RedSocial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        RedSocial->setMenuBar(menubar);
        statusbar = new QStatusBar(RedSocial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RedSocial->setStatusBar(statusbar);

        retranslateUi(RedSocial);

        QMetaObject::connectSlotsByName(RedSocial);
    } // setupUi

    void retranslateUi(QMainWindow *RedSocial)
    {
        RedSocial->setWindowTitle(QCoreApplication::translate("RedSocial", "RedSocial", nullptr));
        label->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">name</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Last Name</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">old</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">UserName</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("RedSocial", "Cofirm", nullptr));
        btnReg->setText(QCoreApplication::translate("RedSocial", "Register", nullptr));
        label_7->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Register</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Login</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">UserName</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        btnLog->setText(QCoreApplication::translate("RedSocial", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedSocial: public Ui_RedSocial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDSOCIAL_H
