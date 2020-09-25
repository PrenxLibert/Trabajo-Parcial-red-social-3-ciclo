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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interfast
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *txtbox_envio;
    QPushButton *pushButton;
    QLineEdit *txtbx_mensajes;
    QWidget *tab_2;

    void setupUi(QWidget *interfast)
    {
        if (interfast->objectName().isEmpty())
            interfast->setObjectName(QString::fromUtf8("interfast"));
        interfast->resize(731, 369);
        tabWidget = new QTabWidget(interfast);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(190, 20, 371, 331));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        txtbox_envio = new QLineEdit(tab);
        txtbox_envio->setObjectName(QString::fromUtf8("txtbox_envio"));
        txtbox_envio->setGeometry(QRect(10, 260, 261, 31));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 75, 31));
        txtbx_mensajes = new QLineEdit(tab);
        txtbx_mensajes->setObjectName(QString::fromUtf8("txtbx_mensajes"));
        txtbx_mensajes->setGeometry(QRect(10, 10, 341, 241));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(interfast);

        QMetaObject::connectSlotsByName(interfast);
    } // setupUi

    void retranslateUi(QWidget *interfast)
    {
        interfast->setWindowTitle(QCoreApplication::translate("interfast", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("interfast", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("interfast", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("interfast", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interfast: public Ui_interfast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAST_H
