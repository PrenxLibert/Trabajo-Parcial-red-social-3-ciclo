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
    QStackedWidget *Tu_perfil;
    QWidget *publicaciones;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QLineEdit *lineEdit;
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
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolBox *toolBox;
    QWidget *page_2;
    QWidget *page_3;

    void setupUi(QWidget *interfast)
    {
        if (interfast->objectName().isEmpty())
            interfast->setObjectName(QString::fromUtf8("interfast"));
        interfast->resize(586, 369);
        Tu_perfil = new QStackedWidget(interfast);
        Tu_perfil->setObjectName(QString::fromUtf8("Tu_perfil"));
        Tu_perfil->setGeometry(QRect(190, 10, 391, 361));
        publicaciones = new QWidget();
        publicaciones->setObjectName(QString::fromUtf8("publicaciones"));
        scrollArea = new QScrollArea(publicaciones);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 10, 381, 341));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 379, 339));
        lineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 381, 341));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        Tu_perfil->addWidget(publicaciones);
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
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        lbl_nombre_5->setFont(font);
        lbl_usuario_2 = new QLabel(tab_2);
        lbl_usuario_2->setObjectName(QString::fromUtf8("lbl_usuario_2"));
        lbl_usuario_2->setGeometry(QRect(110, 31, 151, 20));
        lbl_usuario_2->setFont(font);
        lbl_usuario_2->setAlignment(Qt::AlignCenter);
        lbl_nombre_6 = new QLabel(tab_2);
        lbl_nombre_6->setObjectName(QString::fromUtf8("lbl_nombre_6"));
        lbl_nombre_6->setGeometry(QRect(20, 61, 101, 31));
        lbl_nombre_6->setFont(font);
        lbl_nombre_7 = new QLabel(tab_2);
        lbl_nombre_7->setObjectName(QString::fromUtf8("lbl_nombre_7"));
        lbl_nombre_7->setGeometry(QRect(20, 141, 101, 31));
        lbl_nombre_7->setFont(font);
        lbl_nombre_8 = new QLabel(tab_2);
        lbl_nombre_8->setObjectName(QString::fromUtf8("lbl_nombre_8"));
        lbl_nombre_8->setGeometry(QRect(20, 181, 101, 31));
        lbl_nombre_8->setFont(font);
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
        Tu_perfil->addWidget(amigos);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lbl_nombre = new QLabel(page);
        lbl_nombre->setObjectName(QString::fromUtf8("lbl_nombre"));
        lbl_nombre->setGeometry(QRect(30, 50, 101, 31));
        lbl_nombre->setFont(font);
        lbl_nombre_2 = new QLabel(page);
        lbl_nombre_2->setObjectName(QString::fromUtf8("lbl_nombre_2"));
        lbl_nombre_2->setGeometry(QRect(30, 90, 101, 31));
        lbl_nombre_2->setFont(font);
        lbl_nombre_3 = new QLabel(page);
        lbl_nombre_3->setObjectName(QString::fromUtf8("lbl_nombre_3"));
        lbl_nombre_3->setGeometry(QRect(30, 130, 101, 31));
        lbl_nombre_3->setFont(font);
        lbl_nombre_4 = new QLabel(page);
        lbl_nombre_4->setObjectName(QString::fromUtf8("lbl_nombre_4"));
        lbl_nombre_4->setGeometry(QRect(30, 170, 101, 31));
        lbl_nombre_4->setFont(font);
        modi_aplicar = new QPushButton(page);
        modi_aplicar->setObjectName(QString::fromUtf8("modi_aplicar"));
        modi_aplicar->setGeometry(QRect(240, 310, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        modi_aplicar->setFont(font1);
        lbl_usuario = new QLabel(page);
        lbl_usuario->setObjectName(QString::fromUtf8("lbl_usuario"));
        lbl_usuario->setGeometry(QRect(120, 20, 151, 20));
        lbl_usuario->setFont(font);
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
        Tu_perfil->addWidget(page);
        pushButton_2 = new QPushButton(interfast);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 20, 91, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(interfast);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 60, 91, 31));
        pushButton_3->setFont(font2);
        toolBox = new QToolBox(interfast);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(30, 102, 131, 251));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 131, 197));
        toolBox->addItem(page_2, QString::fromUtf8("Page 1"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 131, 197));
        toolBox->addItem(page_3, QString::fromUtf8("Page 2"));

        retranslateUi(interfast);

        Tu_perfil->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(interfast);
    } // setupUi

    void retranslateUi(QWidget *interfast)
    {
        interfast->setWindowTitle(QCoreApplication::translate("interfast", "Form", nullptr));
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
        pushButton_2->setText(QCoreApplication::translate("interfast", "Tu Perfil", nullptr));
        pushButton_3->setText(QCoreApplication::translate("interfast", "Tu Perfil", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("interfast", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("interfast", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interfast: public Ui_interfast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAST_H
