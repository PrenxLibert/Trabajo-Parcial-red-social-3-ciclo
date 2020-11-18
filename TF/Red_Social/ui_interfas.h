/********************************************************************************
** Form generated from reading UI file 'interfas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAS_H
#define UI_INTERFAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfas
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLineEdit *tbxNPublic;
    QPushButton *btnPublic;
    QTextEdit *tbxPublic;
    QWidget *tab_4;
    QTextEdit *tbxMsj;
    QLineEdit *tbxNMs;
    QPushButton *btnEnviar;
    QWidget *tab_5;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QWidget *tab_6;
    QWidget *tab_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tbxName;
    QLineEdit *tbxMail;
    QLineEdit *tbxID;
    QLineEdit *tbxDate;

    void setupUi(QDialog *Interfas)
    {
        if (Interfas->objectName().isEmpty())
            Interfas->setObjectName(QString::fromUtf8("Interfas"));
        Interfas->resize(614, 472);
        tabWidget = new QTabWidget(Interfas);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(26, 19, 561, 431));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tbxNPublic = new QLineEdit(tab_3);
        tbxNPublic->setObjectName(QString::fromUtf8("tbxNPublic"));
        tbxNPublic->setGeometry(QRect(10, 10, 431, 41));
        btnPublic = new QPushButton(tab_3);
        btnPublic->setObjectName(QString::fromUtf8("btnPublic"));
        btnPublic->setGeometry(QRect(460, 10, 75, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btnPublic->setFont(font);
        tbxPublic = new QTextEdit(tab_3);
        tbxPublic->setObjectName(QString::fromUtf8("tbxPublic"));
        tbxPublic->setGeometry(QRect(10, 80, 531, 311));
        tbxPublic->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tbxMsj = new QTextEdit(tab_4);
        tbxMsj->setObjectName(QString::fromUtf8("tbxMsj"));
        tbxMsj->setEnabled(false);
        tbxMsj->setGeometry(QRect(220, 40, 321, 281));
        tbxMsj->setLayoutDirection(Qt::LeftToRight);
        tbxMsj->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tbxNMs = new QLineEdit(tab_4);
        tbxNMs->setObjectName(QString::fromUtf8("tbxNMs"));
        tbxNMs->setGeometry(QRect(220, 340, 311, 31));
        btnEnviar = new QPushButton(tab_4);
        btnEnviar->setObjectName(QString::fromUtf8("btnEnviar"));
        btnEnviar->setGeometry(QRect(450, 380, 75, 23));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        lineEdit_7 = new QLineEdit(tab_5);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(10, 10, 441, 31));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 10, 75, 31));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label = new QLabel(tab_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 61, 21));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 61, 21));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 41, 16));
        label_4 = new QLabel(tab_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(6, 140, 81, 20));
        tbxName = new QLineEdit(tab_7);
        tbxName->setObjectName(QString::fromUtf8("tbxName"));
        tbxName->setEnabled(false);
        tbxName->setGeometry(QRect(120, 20, 113, 20));
        tbxMail = new QLineEdit(tab_7);
        tbxMail->setObjectName(QString::fromUtf8("tbxMail"));
        tbxMail->setEnabled(false);
        tbxMail->setGeometry(QRect(120, 60, 113, 20));
        tbxID = new QLineEdit(tab_7);
        tbxID->setObjectName(QString::fromUtf8("tbxID"));
        tbxID->setEnabled(false);
        tbxID->setGeometry(QRect(120, 100, 113, 20));
        tbxDate = new QLineEdit(tab_7);
        tbxDate->setObjectName(QString::fromUtf8("tbxDate"));
        tbxDate->setEnabled(false);
        tbxDate->setGeometry(QRect(120, 140, 113, 20));
        tabWidget->addTab(tab_7, QString());

        retranslateUi(Interfas);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Interfas);
    } // setupUi

    void retranslateUi(QDialog *Interfas)
    {
        Interfas->setWindowTitle(QCoreApplication::translate("Interfas", "Dialog", nullptr));
        btnPublic->setText(QCoreApplication::translate("Interfas", "Publicar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Interfas", "Principal", nullptr));
        btnEnviar->setText(QCoreApplication::translate("Interfas", "Enviar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Interfas", "Mensajes", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Interfas", "Buscar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Interfas", "Buscar Amigos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Interfas", "Solicitudes", nullptr));
        label->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Nombre</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Mail</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">ID</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Date</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("Interfas", "Perfil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfas: public Ui_Interfas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAS_H
