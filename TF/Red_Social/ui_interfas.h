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
    QPushButton *btnOlikes;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QTextEdit *tbxMsj;
    QLineEdit *tbxNMs;
    QPushButton *btnEnviar;
    QLabel *label_5;
    QLineEdit *tbxIDF;
    QPushButton *btnVchat;
    QLabel *lblNameF;
    QWidget *tab_5;
    QLineEdit *tbxSearch;
    QPushButton *btnSearch;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *tbxNameF;
    QLineEdit *tbxMailF;
    QLineEdit *tbxIdF;
    QLineEdit *tbxDateF;
    QTextEdit *tbxPublicF;
    QPushButton *pushButton;
    QWidget *tab_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tbxName;
    QLineEdit *tbxMail;
    QLineEdit *tbxID;
    QLineEdit *tbxDate;
    QTextEdit *textEdit;

    void setupUi(QDialog *Interfas)
    {
        if (Interfas->objectName().isEmpty())
            Interfas->setObjectName(QString::fromUtf8("Interfas"));
        Interfas->resize(614, 514);
        tabWidget = new QTabWidget(Interfas);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(26, 19, 561, 481));
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
        tbxPublic->setGeometry(QRect(10, 120, 531, 271));
        tbxPublic->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        btnOlikes = new QPushButton(tab_3);
        btnOlikes->setObjectName(QString::fromUtf8("btnOlikes"));
        btnOlikes->setGeometry(QRect(10, 80, 75, 23));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 60, 71, 16));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 400, 71, 16));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 420, 71, 20));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 420, 321, 20));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 420, 75, 23));
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
        btnEnviar->setEnabled(false);
        btnEnviar->setGeometry(QRect(450, 380, 75, 23));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 70, 41, 16));
        tbxIDF = new QLineEdit(tab_4);
        tbxIDF->setObjectName(QString::fromUtf8("tbxIDF"));
        tbxIDF->setGeometry(QRect(70, 70, 113, 20));
        btnVchat = new QPushButton(tab_4);
        btnVchat->setObjectName(QString::fromUtf8("btnVchat"));
        btnVchat->setGeometry(QRect(90, 110, 75, 23));
        lblNameF = new QLabel(tab_4);
        lblNameF->setObjectName(QString::fromUtf8("lblNameF"));
        lblNameF->setGeometry(QRect(230, 10, 61, 16));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tbxSearch = new QLineEdit(tab_5);
        tbxSearch->setObjectName(QString::fromUtf8("tbxSearch"));
        tbxSearch->setGeometry(QRect(10, 10, 441, 31));
        btnSearch = new QPushButton(tab_5);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setGeometry(QRect(470, 10, 75, 31));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 47, 21));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 90, 21, 21));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 60, 31, 21));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(200, 90, 31, 16));
        tbxNameF = new QLineEdit(tab_5);
        tbxNameF->setObjectName(QString::fromUtf8("tbxNameF"));
        tbxNameF->setEnabled(false);
        tbxNameF->setGeometry(QRect(70, 60, 113, 20));
        tbxMailF = new QLineEdit(tab_5);
        tbxMailF->setObjectName(QString::fromUtf8("tbxMailF"));
        tbxMailF->setEnabled(false);
        tbxMailF->setGeometry(QRect(240, 60, 113, 20));
        tbxIdF = new QLineEdit(tab_5);
        tbxIdF->setObjectName(QString::fromUtf8("tbxIdF"));
        tbxIdF->setEnabled(false);
        tbxIdF->setGeometry(QRect(70, 90, 113, 20));
        tbxDateF = new QLineEdit(tab_5);
        tbxDateF->setObjectName(QString::fromUtf8("tbxDateF"));
        tbxDateF->setEnabled(false);
        tbxDateF->setGeometry(QRect(240, 90, 113, 20));
        tbxPublicF = new QTextEdit(tab_5);
        tbxPublicF->setObjectName(QString::fromUtf8("tbxPublicF"));
        tbxPublicF->setGeometry(QRect(10, 120, 531, 271));
        tbxPublicF->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pushButton = new QPushButton(tab_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 70, 75, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label = new QLabel(tab_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 61, 21));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 20, 61, 21));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 50, 41, 16));
        label_4 = new QLabel(tab_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 50, 41, 20));
        tbxName = new QLineEdit(tab_7);
        tbxName->setObjectName(QString::fromUtf8("tbxName"));
        tbxName->setEnabled(false);
        tbxName->setGeometry(QRect(120, 20, 113, 20));
        tbxMail = new QLineEdit(tab_7);
        tbxMail->setObjectName(QString::fromUtf8("tbxMail"));
        tbxMail->setEnabled(false);
        tbxMail->setGeometry(QRect(300, 20, 113, 20));
        tbxID = new QLineEdit(tab_7);
        tbxID->setObjectName(QString::fromUtf8("tbxID"));
        tbxID->setEnabled(false);
        tbxID->setGeometry(QRect(120, 50, 113, 20));
        tbxDate = new QLineEdit(tab_7);
        tbxDate->setObjectName(QString::fromUtf8("tbxDate"));
        tbxDate->setEnabled(false);
        tbxDate->setGeometry(QRect(300, 50, 113, 20));
        textEdit = new QTextEdit(tab_7);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 80, 511, 301));
        tabWidget->addTab(tab_7, QString());

        retranslateUi(Interfas);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Interfas);
    } // setupUi

    void retranslateUi(QDialog *Interfas)
    {
        Interfas->setWindowTitle(QCoreApplication::translate("Interfas", "Dialog", nullptr));
        btnPublic->setText(QCoreApplication::translate("Interfas", "Publicar", nullptr));
        btnOlikes->setText(QCoreApplication::translate("Interfas", "Likes", nullptr));
        label_10->setText(QCoreApplication::translate("Interfas", "Ordenar por:", nullptr));
        label_11->setText(QCoreApplication::translate("Interfas", "ID Publicacion", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interfas", "Comentar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Interfas", "Principal", nullptr));
        btnEnviar->setText(QCoreApplication::translate("Interfas", "Enviar", nullptr));
        label_5->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">ID</span></p></body></html>", nullptr));
        btnVchat->setText(QCoreApplication::translate("Interfas", "listo", nullptr));
        lblNameF->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Interfas", "Mensajes", nullptr));
        btnSearch->setText(QCoreApplication::translate("Interfas", "Buscar", nullptr));
        label_6->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Name</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">ID</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Mail</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Interfas", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Date</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Interfas", "Follow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Interfas", "Buscar Amigos", nullptr));
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
