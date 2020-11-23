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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *tbxName;
    QLineEdit *tbxMail;
    QLineEdit *tbxID;
    QLineEdit *tbxDate;
    QCheckBox *checkBox;
    QPushButton *btnReg;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *tbxCname;
    QPushButton *btnLog;
    QLabel *label_3;
    QLineEdit *tbxCMail;
    QMenuBar *menubar;
    QMenu *menuRedSocial;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RedSocial)
    {
        if (RedSocial->objectName().isEmpty())
            RedSocial->setObjectName(QString::fromUtf8("RedSocial"));
        RedSocial->resize(564, 371);
        centralwidget = new QWidget(RedSocial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 51, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 41, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 130, 31, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 180, 51, 21));
        tbxName = new QLineEdit(centralwidget);
        tbxName->setObjectName(QString::fromUtf8("tbxName"));
        tbxName->setGeometry(QRect(120, 60, 113, 20));
        tbxMail = new QLineEdit(centralwidget);
        tbxMail->setObjectName(QString::fromUtf8("tbxMail"));
        tbxMail->setGeometry(QRect(120, 100, 113, 20));
        tbxID = new QLineEdit(centralwidget);
        tbxID->setObjectName(QString::fromUtf8("tbxID"));
        tbxID->setGeometry(QRect(120, 140, 113, 20));
        tbxDate = new QLineEdit(centralwidget);
        tbxDate->setObjectName(QString::fromUtf8("tbxDate"));
        tbxDate->setGeometry(QRect(120, 180, 113, 20));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(140, 230, 70, 17));
        btnReg = new QPushButton(centralwidget);
        btnReg->setObjectName(QString::fromUtf8("btnReg"));
        btnReg->setGeometry(QRect(140, 260, 75, 23));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 10, 121, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(410, 10, 71, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 60, 81, 21));
        tbxCname = new QLineEdit(centralwidget);
        tbxCname->setObjectName(QString::fromUtf8("tbxCname"));
        tbxCname->setGeometry(QRect(390, 60, 121, 20));
        btnLog = new QPushButton(centralwidget);
        btnLog->setObjectName(QString::fromUtf8("btnLog"));
        btnLog->setGeometry(QRect(410, 150, 75, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 90, 41, 21));
        tbxCMail = new QLineEdit(centralwidget);
        tbxCMail->setObjectName(QString::fromUtf8("tbxCMail"));
        tbxCMail->setGeometry(QRect(390, 90, 121, 20));
        RedSocial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RedSocial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 564, 21));
        menuRedSocial = new QMenu(menubar);
        menuRedSocial->setObjectName(QString::fromUtf8("menuRedSocial"));
        RedSocial->setMenuBar(menubar);
        statusbar = new QStatusBar(RedSocial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RedSocial->setStatusBar(statusbar);

        menubar->addAction(menuRedSocial->menuAction());

        retranslateUi(RedSocial);

        QMetaObject::connectSlotsByName(RedSocial);
    } // setupUi

    void retranslateUi(QMainWindow *RedSocial)
    {
        RedSocial->setWindowTitle(QCoreApplication::translate("RedSocial", "RedSocial", nullptr));
        label->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">name</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Mail</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">ID</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Date</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("RedSocial", "Cofirm", nullptr));
        btnReg->setText(QCoreApplication::translate("RedSocial", "Register", nullptr));
        label_7->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Register</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; font-style:italic;\">Login</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Name</span></p></body></html>", nullptr));
        btnLog->setText(QCoreApplication::translate("RedSocial", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("RedSocial", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Mail</span></p></body></html>", nullptr));
        menuRedSocial->setTitle(QCoreApplication::translate("RedSocial", "RedSocial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedSocial: public Ui_RedSocial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDSOCIAL_H
