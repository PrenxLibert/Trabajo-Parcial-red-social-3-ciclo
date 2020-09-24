/********************************************************************************
** Form generated from reading UI file 'baseredsocial.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEREDSOCIAL_H
#define UI_BASEREDSOCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_baseredsocial
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *tbxUsrLog;
    QLabel *label_2;
    QLineEdit *tbxContrasena;
    QPushButton *btnLogin;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tbxName;
    QLabel *label_5;
    QLineEdit *tbxLastname;
    QLabel *label_6;
    QLineEdit *tbxPhone;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *tbxUsrReg;
    QLineEdit *tbxPasswordIn;
    QLineEdit *tbxPasswordCon;
    QPushButton *btnRegister;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *baseredsocial)
    {
        if (baseredsocial->objectName().isEmpty())
            baseredsocial->setObjectName(QString::fromUtf8("baseredsocial"));
        baseredsocial->resize(800, 475);
        centralwidget = new QWidget(baseredsocial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 20, 51, 21));
        tbxUsrLog = new QLineEdit(centralwidget);
        tbxUsrLog->setObjectName(QString::fromUtf8("tbxUsrLog"));
        tbxUsrLog->setGeometry(QRect(350, 20, 113, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 20, 61, 16));
        tbxContrasena = new QLineEdit(centralwidget);
        tbxContrasena->setObjectName(QString::fromUtf8("tbxContrasena"));
        tbxContrasena->setGeometry(QRect(550, 20, 113, 20));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(680, 20, 75, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 100, 61, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 150, 47, 13));
        tbxName = new QLineEdit(centralwidget);
        tbxName->setObjectName(QString::fromUtf8("tbxName"));
        tbxName->setGeometry(QRect(390, 150, 381, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 190, 51, 21));
        tbxLastname = new QLineEdit(centralwidget);
        tbxLastname->setObjectName(QString::fromUtf8("tbxLastname"));
        tbxLastname->setGeometry(QRect(390, 190, 381, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 230, 47, 21));
        tbxPhone = new QLineEdit(centralwidget);
        tbxPhone->setObjectName(QString::fromUtf8("tbxPhone"));
        tbxPhone->setGeometry(QRect(390, 230, 381, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 270, 101, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 310, 71, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 350, 111, 20));
        tbxUsrReg = new QLineEdit(centralwidget);
        tbxUsrReg->setObjectName(QString::fromUtf8("tbxUsrReg"));
        tbxUsrReg->setGeometry(QRect(390, 270, 381, 20));
        tbxPasswordIn = new QLineEdit(centralwidget);
        tbxPasswordIn->setObjectName(QString::fromUtf8("tbxPasswordIn"));
        tbxPasswordIn->setGeometry(QRect(390, 310, 381, 20));
        tbxPasswordCon = new QLineEdit(centralwidget);
        tbxPasswordCon->setObjectName(QString::fromUtf8("tbxPasswordCon"));
        tbxPasswordCon->setGeometry(QRect(390, 350, 381, 20));
        btnRegister = new QPushButton(centralwidget);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(390, 410, 75, 23));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 410, 71, 16));
        baseredsocial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(baseredsocial);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        baseredsocial->setMenuBar(menubar);
        statusbar = new QStatusBar(baseredsocial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        baseredsocial->setStatusBar(statusbar);

        retranslateUi(baseredsocial);

        QMetaObject::connectSlotsByName(baseredsocial);
    } // setupUi

    void retranslateUi(QMainWindow *baseredsocial)
    {
        baseredsocial->setWindowTitle(QCoreApplication::translate("baseredsocial", "baseredsocial", nullptr));
        label->setText(QCoreApplication::translate("baseredsocial", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("baseredsocial", "Contrase\303\261a", nullptr));
        btnLogin->setText(QCoreApplication::translate("baseredsocial", "Log in", nullptr));
        label_3->setText(QCoreApplication::translate("baseredsocial", "Resgitrarse", nullptr));
        label_4->setText(QCoreApplication::translate("baseredsocial", "Nombre :", nullptr));
        label_5->setText(QCoreApplication::translate("baseredsocial", "Apellidos :", nullptr));
        label_6->setText(QCoreApplication::translate("baseredsocial", "Telefono :", nullptr));
        label_7->setText(QCoreApplication::translate("baseredsocial", "Nombre de usuario :", nullptr));
        label_8->setText(QCoreApplication::translate("baseredsocial", "Contrase\303\261a :", nullptr));
        label_9->setText(QCoreApplication::translate("baseredsocial", "Confirmar contrase\303\261a :", nullptr));
        btnRegister->setText(QCoreApplication::translate("baseredsocial", "Registrar", nullptr));
        label_10->setText(QCoreApplication::translate("baseredsocial", "Resgistrarse :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class baseredsocial: public Ui_baseredsocial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEREDSOCIAL_H
