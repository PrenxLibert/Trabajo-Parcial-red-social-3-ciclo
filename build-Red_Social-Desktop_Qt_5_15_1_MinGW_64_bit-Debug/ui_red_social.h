/********************************************************************************
** Form generated from reading UI file 'red_social.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RED_SOCIAL_H
#define UI_RED_SOCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Red_social
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QWidget *tab_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Red_social)
    {
        if (Red_social->objectName().isEmpty())
            Red_social->setObjectName(QString::fromUtf8("Red_social"));
        Red_social->resize(742, 466);
        tabWidget = new QTabWidget(Red_social);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(110, 20, 381, 441));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 0, 351, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 349, 399));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 360, 75, 31));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 360, 221, 31));
        QFont font1;
        font1.setPointSize(10);
        textBrowser->setFont(font1);
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setEnabled(true);
        textBrowser_2->setGeometry(QRect(20, 10, 311, 341));
        textBrowser_2->setStyleSheet(QString::fromUtf8("Color:rgb(255, 85, 0);\n"
"color: rgb(85, 170, 0);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 111, 31));
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 111, 31));
        label_2->setFont(font2);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 111, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 170, 111, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 141, 31));
        label_5->setFont(font2);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Red_social);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Red_social);
    } // setupUi

    void retranslateUi(QWidget *Red_social)
    {
        Red_social->setWindowTitle(QCoreApplication::translate("Red_social", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Red_social", "Enviar", nullptr));
#if QT_CONFIG(tooltip)
        textBrowser->setToolTip(QCoreApplication::translate("Red_social", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBrowser->setPlaceholderText(QCoreApplication::translate("Red_social", "Escriba mensaje que desee enviar...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Red_social", "Tab 1", nullptr));
        label->setText(QCoreApplication::translate("Red_social", "Usuario : ", nullptr));
        label_2->setText(QCoreApplication::translate("Red_social", "Nombre : ", nullptr));
        label_3->setText(QCoreApplication::translate("Red_social", "Telefono : ", nullptr));
        label_4->setText(QCoreApplication::translate("Red_social", "Usuario : ", nullptr));
        label_5->setText(QCoreApplication::translate("Red_social", "Contrase\303\261a : ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Red_social", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Red_social: public Ui_Red_social {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RED_SOCIAL_H
