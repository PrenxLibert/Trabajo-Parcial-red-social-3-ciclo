/********************************************************************************
** Form generated from reading UI file 'interfast.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAST_H
#define UI_INTERFAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interfast
{
public:
    QStackedWidget *stacked_all;
    QWidget *publicaciones;
    QScrollArea *scrArea_publi;
    QWidget *scrollAreaWidgetContents_2;
    QTextEdit *textEdit;
    QPushButton *pshbu_envi_publi;
    QWidget *amigos;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *txtbox_envio;
    QPushButton *pushButton;
    QTextEdit *chatText;
    QWidget *tab_2;
    QLabel *lbl_nombre_5;
    QLabel *lbl_usuario_2;
    QLabel *lbl_nombre_6;
    QLabel *lbl_nombre_7;
    QLabel *lbl_nombre_8;
    QLineEdit *ltxtbox_contrase_2;
    QLineEdit *txtbox_telefono_2;
    QLineEdit *txtbox_nombre_2;
    QWidget *page;
    QLabel *lbl_nombre;
    QLabel *lbl_nombre_2;
    QLabel *lbl_nombre_3;
    QLabel *lbl_nombre_4;
    QPushButton *modi_aplicar;
    QLabel *lbl_usuario;
    QLineEdit *txtbox_nombre;
    QLineEdit *txt_apellidos;
    QLineEdit *txtbox_telefono;
    QLineEdit *ltxtbox_contrase;
    QPushButton *pshbu_mos_perfil;
    QPushButton *pushButton_3;
    QToolBox *toolBox;
    QWidget *page_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QWidget *page_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QLabel *user1;
    QLabel *user;
    QLabel *user3;
    QLabel *user4;
    QLabel *user5;
    QPushButton *psbu_solicitud1;
    QPushButton *psbu_solicitud2;
    QPushButton *psbu_solicitud3;
    QPushButton *psbu_solicitud4;
    QPushButton *psbu_solicitud5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *page_6;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_3;

    void setupUi(QWidget *interfast)
    {
        if (interfast->objectName().isEmpty())
            interfast->setObjectName(QString::fromUtf8("interfast"));
        interfast->resize(586, 382);
        stacked_all = new QStackedWidget(interfast);
        stacked_all->setObjectName(QString::fromUtf8("stacked_all"));
        stacked_all->setGeometry(QRect(190, 10, 391, 361));
        publicaciones = new QWidget();
        publicaciones->setObjectName(QString::fromUtf8("publicaciones"));
        scrArea_publi = new QScrollArea(publicaciones);
        scrArea_publi->setObjectName(QString::fromUtf8("scrArea_publi"));
        scrArea_publi->setGeometry(QRect(0, 10, 381, 341));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrArea_publi->sizePolicy().hasHeightForWidth());
        scrArea_publi->setSizePolicy(sizePolicy);
        scrArea_publi->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 379, 339));
        textEdit = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 281, 71));
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        pshbu_envi_publi = new QPushButton(scrollAreaWidgetContents_2);
        pshbu_envi_publi->setObjectName(QString::fromUtf8("pshbu_envi_publi"));
        pshbu_envi_publi->setGeometry(QRect(300, 30, 75, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pshbu_envi_publi->setFont(font1);
        scrArea_publi->setWidget(scrollAreaWidgetContents_2);
        stacked_all->addWidget(publicaciones);
        amigos = new QWidget();
        amigos->setObjectName(QString::fromUtf8("amigos"));
        tabWidget = new QTabWidget(amigos);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 371, 331));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        txtbox_envio = new QLineEdit(tab);
        txtbox_envio->setObjectName(QString::fromUtf8("txtbox_envio"));
        txtbox_envio->setGeometry(QRect(10, 260, 261, 31));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 75, 31));
        chatText = new QTextEdit(tab);
        chatText->setObjectName(QString::fromUtf8("chatText"));
        chatText->setGeometry(QRect(10, 10, 341, 241));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lbl_nombre_5 = new QLabel(tab_2);
        lbl_nombre_5->setObjectName(QString::fromUtf8("lbl_nombre_5"));
        lbl_nombre_5->setGeometry(QRect(20, 101, 101, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_nombre_5->setFont(font2);
        lbl_usuario_2 = new QLabel(tab_2);
        lbl_usuario_2->setObjectName(QString::fromUtf8("lbl_usuario_2"));
        lbl_usuario_2->setGeometry(QRect(110, 31, 151, 20));
        lbl_usuario_2->setFont(font2);
        lbl_usuario_2->setAlignment(Qt::AlignCenter);
        lbl_nombre_6 = new QLabel(tab_2);
        lbl_nombre_6->setObjectName(QString::fromUtf8("lbl_nombre_6"));
        lbl_nombre_6->setGeometry(QRect(20, 61, 101, 31));
        lbl_nombre_6->setFont(font2);
        lbl_nombre_7 = new QLabel(tab_2);
        lbl_nombre_7->setObjectName(QString::fromUtf8("lbl_nombre_7"));
        lbl_nombre_7->setGeometry(QRect(20, 141, 101, 31));
        lbl_nombre_7->setFont(font2);
        lbl_nombre_8 = new QLabel(tab_2);
        lbl_nombre_8->setObjectName(QString::fromUtf8("lbl_nombre_8"));
        lbl_nombre_8->setGeometry(QRect(20, 181, 101, 31));
        lbl_nombre_8->setFont(font2);
        ltxtbox_contrase_2 = new QLineEdit(tab_2);
        ltxtbox_contrase_2->setObjectName(QString::fromUtf8("ltxtbox_contrase_2"));
        ltxtbox_contrase_2->setGeometry(QRect(130, 190, 221, 21));
        txtbox_telefono_2 = new QLineEdit(tab_2);
        txtbox_telefono_2->setObjectName(QString::fromUtf8("txtbox_telefono_2"));
        txtbox_telefono_2->setGeometry(QRect(130, 150, 221, 21));
        txtbox_nombre_2 = new QLineEdit(tab_2);
        txtbox_nombre_2->setObjectName(QString::fromUtf8("txtbox_nombre_2"));
        txtbox_nombre_2->setGeometry(QRect(130, 70, 221, 21));
        tabWidget->addTab(tab_2, QString());
        stacked_all->addWidget(amigos);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lbl_nombre = new QLabel(page);
        lbl_nombre->setObjectName(QString::fromUtf8("lbl_nombre"));
        lbl_nombre->setGeometry(QRect(30, 50, 101, 31));
        lbl_nombre->setFont(font2);
        lbl_nombre_2 = new QLabel(page);
        lbl_nombre_2->setObjectName(QString::fromUtf8("lbl_nombre_2"));
        lbl_nombre_2->setGeometry(QRect(30, 90, 101, 31));
        lbl_nombre_2->setFont(font2);
        lbl_nombre_3 = new QLabel(page);
        lbl_nombre_3->setObjectName(QString::fromUtf8("lbl_nombre_3"));
        lbl_nombre_3->setGeometry(QRect(30, 130, 101, 31));
        lbl_nombre_3->setFont(font2);
        lbl_nombre_4 = new QLabel(page);
        lbl_nombre_4->setObjectName(QString::fromUtf8("lbl_nombre_4"));
        lbl_nombre_4->setGeometry(QRect(30, 170, 101, 31));
        lbl_nombre_4->setFont(font2);
        modi_aplicar = new QPushButton(page);
        modi_aplicar->setObjectName(QString::fromUtf8("modi_aplicar"));
        modi_aplicar->setGeometry(QRect(240, 310, 141, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        modi_aplicar->setFont(font3);
        lbl_usuario = new QLabel(page);
        lbl_usuario->setObjectName(QString::fromUtf8("lbl_usuario"));
        lbl_usuario->setGeometry(QRect(120, 20, 151, 20));
        lbl_usuario->setFont(font2);
        lbl_usuario->setAlignment(Qt::AlignCenter);
        txtbox_nombre = new QLineEdit(page);
        txtbox_nombre->setObjectName(QString::fromUtf8("txtbox_nombre"));
        txtbox_nombre->setGeometry(QRect(140, 59, 221, 21));
        txt_apellidos = new QLineEdit(page);
        txt_apellidos->setObjectName(QString::fromUtf8("txt_apellidos"));
        txt_apellidos->setGeometry(QRect(140, 99, 221, 21));
        txtbox_telefono = new QLineEdit(page);
        txtbox_telefono->setObjectName(QString::fromUtf8("txtbox_telefono"));
        txtbox_telefono->setGeometry(QRect(140, 139, 221, 21));
        ltxtbox_contrase = new QLineEdit(page);
        ltxtbox_contrase->setObjectName(QString::fromUtf8("ltxtbox_contrase"));
        ltxtbox_contrase->setGeometry(QRect(140, 179, 221, 21));
        stacked_all->addWidget(page);
        pshbu_mos_perfil = new QPushButton(interfast);
        pshbu_mos_perfil->setObjectName(QString::fromUtf8("pshbu_mos_perfil"));
        pshbu_mos_perfil->setGeometry(QRect(50, 20, 91, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        pshbu_mos_perfil->setFont(font4);
        pushButton_3 = new QPushButton(interfast);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 60, 131, 31));
        pushButton_3->setFont(font4);
        toolBox = new QToolBox(interfast);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 100, 171, 281));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 171, 200));
        scrollArea_3 = new QScrollArea(page_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(10, 0, 151, 151));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 149, 149));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 180, 113, 20));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 180, 51, 21));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 131, 16));
        toolBox->addItem(page_2, QString::fromUtf8("Amigos"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 171, 200));
        scrollArea_2 = new QScrollArea(page_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 50, 161, 161));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 159));
        user1 = new QLabel(scrollAreaWidgetContents);
        user1->setObjectName(QString::fromUtf8("user1"));
        user1->setGeometry(QRect(10, 10, 91, 16));
        user = new QLabel(scrollAreaWidgetContents);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(10, 40, 91, 16));
        user3 = new QLabel(scrollAreaWidgetContents);
        user3->setObjectName(QString::fromUtf8("user3"));
        user3->setGeometry(QRect(10, 70, 91, 16));
        user4 = new QLabel(scrollAreaWidgetContents);
        user4->setObjectName(QString::fromUtf8("user4"));
        user4->setGeometry(QRect(10, 100, 91, 16));
        user5 = new QLabel(scrollAreaWidgetContents);
        user5->setObjectName(QString::fromUtf8("user5"));
        user5->setGeometry(QRect(10, 130, 91, 16));
        psbu_solicitud1 = new QPushButton(scrollAreaWidgetContents);
        psbu_solicitud1->setObjectName(QString::fromUtf8("psbu_solicitud1"));
        psbu_solicitud1->setGeometry(QRect(110, 10, 51, 23));
        psbu_solicitud2 = new QPushButton(scrollAreaWidgetContents);
        psbu_solicitud2->setObjectName(QString::fromUtf8("psbu_solicitud2"));
        psbu_solicitud2->setGeometry(QRect(110, 40, 51, 23));
        psbu_solicitud3 = new QPushButton(scrollAreaWidgetContents);
        psbu_solicitud3->setObjectName(QString::fromUtf8("psbu_solicitud3"));
        psbu_solicitud3->setGeometry(QRect(110, 70, 51, 23));
        psbu_solicitud4 = new QPushButton(scrollAreaWidgetContents);
        psbu_solicitud4->setObjectName(QString::fromUtf8("psbu_solicitud4"));
        psbu_solicitud4->setGeometry(QRect(110, 100, 51, 23));
        psbu_solicitud5 = new QPushButton(scrollAreaWidgetContents);
        psbu_solicitud5->setObjectName(QString::fromUtf8("psbu_solicitud5"));
        psbu_solicitud5->setGeometry(QRect(110, 130, 51, 23));
        scrollArea_2->setWidget(scrollAreaWidgetContents);
        lineEdit_2 = new QLineEdit(page_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 20, 113, 20));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 20, 51, 23));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 141, 16));
        toolBox->addItem(page_3, QString::fromUtf8("Buscar amigo"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        scrollArea_6 = new QScrollArea(page_6);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(0, 0, 171, 121));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 169, 119));
        scrollArea_6->setWidget(scrollAreaWidgetContents_6);
        lineEdit_6 = new QLineEdit(page_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(30, 140, 113, 20));
        pushButton_6 = new QPushButton(page_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 170, 75, 23));
        pushButton_7 = new QPushButton(page_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(90, 170, 75, 23));
        label_3 = new QLabel(page_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 141, 20));
        toolBox->addItem(page_6, QString::fromUtf8("solicitudes"));

        retranslateUi(interfast);

        stacked_all->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(interfast);
    } // setupUi

    void retranslateUi(QWidget *interfast)
    {
        interfast->setWindowTitle(QCoreApplication::translate("interfast", "Form", nullptr));
        pshbu_envi_publi->setText(QCoreApplication::translate("interfast", "enviar", nullptr));
        pushButton->setText(QCoreApplication::translate("interfast", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("interfast", "Chat", nullptr));
        lbl_nombre_5->setText(QCoreApplication::translate("interfast", "Apellidos:", nullptr));
        lbl_usuario_2->setText(QCoreApplication::translate("interfast", "XXXXXXXXX", nullptr));
        lbl_nombre_6->setText(QCoreApplication::translate("interfast", "Nombre:", nullptr));
        lbl_nombre_7->setText(QCoreApplication::translate("interfast", "Telefono:", nullptr));
        lbl_nombre_8->setText(QCoreApplication::translate("interfast", "Contrase\303\261a:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("interfast", "Perfil", nullptr));
        lbl_nombre->setText(QCoreApplication::translate("interfast", "Nombre:", nullptr));
        lbl_nombre_2->setText(QCoreApplication::translate("interfast", "Apellidos:", nullptr));
        lbl_nombre_3->setText(QCoreApplication::translate("interfast", "Telefono:", nullptr));
        lbl_nombre_4->setText(QCoreApplication::translate("interfast", "Contrase\303\261a:", nullptr));
        modi_aplicar->setText(QCoreApplication::translate("interfast", "Modificar perfil", nullptr));
        lbl_usuario->setText(QCoreApplication::translate("interfast", "XXXXXXXXX", nullptr));
        pshbu_mos_perfil->setText(QCoreApplication::translate("interfast", "Tu Perfil", nullptr));
        pushButton_3->setText(QCoreApplication::translate("interfast", "publicaciones", nullptr));
        pushButton_5->setText(QCoreApplication::translate("interfast", "enviar", nullptr));
        label_2->setText(QCoreApplication::translate("interfast", "\302\277con quien quieres hablar?", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("interfast", "Amigos", nullptr));
        user1->setText(QCoreApplication::translate("interfast", "Usuario 1", nullptr));
        user->setText(QCoreApplication::translate("interfast", "Usuario 2", nullptr));
        user3->setText(QCoreApplication::translate("interfast", "Usuario 3", nullptr));
        user4->setText(QCoreApplication::translate("interfast", "Usuario 4", nullptr));
        user5->setText(QCoreApplication::translate("interfast", "Usuario 5", nullptr));
        psbu_solicitud1->setText(QCoreApplication::translate("interfast", "solicitud", nullptr));
        psbu_solicitud2->setText(QCoreApplication::translate("interfast", "solicitud", nullptr));
        psbu_solicitud3->setText(QCoreApplication::translate("interfast", "solicitud", nullptr));
        psbu_solicitud4->setText(QCoreApplication::translate("interfast", "solicitud", nullptr));
        psbu_solicitud5->setText(QCoreApplication::translate("interfast", "solicitud", nullptr));
        pushButton_4->setText(QCoreApplication::translate("interfast", "enviar", nullptr));
        label->setText(QCoreApplication::translate("interfast", "escribe el nombre de usuario", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("interfast", "Buscar amigo", nullptr));
        pushButton_6->setText(QCoreApplication::translate("interfast", "aceptar", nullptr));
        pushButton_7->setText(QCoreApplication::translate("interfast", "eliminar", nullptr));
        label_3->setText(QCoreApplication::translate("interfast", "\302\277A quien quieres responder?", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QCoreApplication::translate("interfast", "solicitudes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interfast: public Ui_interfast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAST_H
