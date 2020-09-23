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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Red_social
{
public:

    void setupUi(QWidget *Red_social)
    {
        if (Red_social->objectName().isEmpty())
            Red_social->setObjectName(QString::fromUtf8("Red_social"));
        Red_social->resize(400, 300);

        retranslateUi(Red_social);

        QMetaObject::connectSlotsByName(Red_social);
    } // setupUi

    void retranslateUi(QWidget *Red_social)
    {
        Red_social->setWindowTitle(QCoreApplication::translate("Red_social", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Red_social: public Ui_Red_social {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RED_SOCIAL_H
