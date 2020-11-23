/********************************************************************************
** Form generated from reading UI file 'vizualizar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIZUALIZAR_H
#define UI_VIZUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Vizualizar
{
public:
    QLabel *label_2;
    QLabel *label;
    QTextEdit *tbxPublic_2;
    QPushButton *pbtn_comentar;
    QTextEdit *tbxPublic;
    QPushButton *pbtn_compartir;
    QLineEdit *tbxNComent;

    void setupUi(QDialog *Vizualizar)
    {
        if (Vizualizar->objectName().isEmpty())
            Vizualizar->setObjectName(QString::fromUtf8("Vizualizar"));
        Vizualizar->resize(513, 380);
        label_2 = new QLabel(Vizualizar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 101, 16));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label = new QLabel(Vizualizar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 71, 16));
        label->setFont(font);
        tbxPublic_2 = new QTextEdit(Vizualizar);
        tbxPublic_2->setObjectName(QString::fromUtf8("tbxPublic_2"));
        tbxPublic_2->setEnabled(true);
        tbxPublic_2->setGeometry(QRect(20, 40, 471, 81));
        tbxPublic_2->setReadOnly(true);
        pbtn_comentar = new QPushButton(Vizualizar);
        pbtn_comentar->setObjectName(QString::fromUtf8("pbtn_comentar"));
        pbtn_comentar->setGeometry(QRect(420, 330, 75, 23));
        tbxPublic = new QTextEdit(Vizualizar);
        tbxPublic->setObjectName(QString::fromUtf8("tbxPublic"));
        tbxPublic->setEnabled(true);
        tbxPublic->setGeometry(QRect(20, 180, 471, 121));
        tbxPublic->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tbxPublic->setReadOnly(true);
        pbtn_compartir = new QPushButton(Vizualizar);
        pbtn_compartir->setObjectName(QString::fromUtf8("pbtn_compartir"));
        pbtn_compartir->setGeometry(QRect(20, 130, 75, 23));
        tbxNComent = new QLineEdit(Vizualizar);
        tbxNComent->setObjectName(QString::fromUtf8("tbxNComent"));
        tbxNComent->setGeometry(QRect(20, 320, 381, 41));

        retranslateUi(Vizualizar);

        QMetaObject::connectSlotsByName(Vizualizar);
    } // setupUi

    void retranslateUi(QDialog *Vizualizar)
    {
        Vizualizar->setWindowTitle(QCoreApplication::translate("Vizualizar", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Vizualizar", "<html><head/><body><p>Comentarios: </p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Vizualizar", "<html><head/><body><p>Publicaci\303\263n: </p></body></html>", nullptr));
        pbtn_comentar->setText(QCoreApplication::translate("Vizualizar", "Comentar", nullptr));
        pbtn_compartir->setText(QCoreApplication::translate("Vizualizar", "Compartir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vizualizar: public Ui_Vizualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIZUALIZAR_H
