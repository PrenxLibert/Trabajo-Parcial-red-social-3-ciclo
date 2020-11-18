#include "interfas.h"
#include "ui_interfas.h"

Interfas::Interfas(User*& u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfas)
{
    ui->setupUi(this);

    usuario=u;

    ui->tbxName->setText(QString::fromStdString(usuario->name));
    ui->tbxMail->setText(QString::fromStdString(usuario->mail));
    ui->tbxID->setText(QString::number(usuario->id));
    ui->tbxDate->setText(QString::fromStdString(usuario->date));
}

Interfas::~Interfas()
{
    delete ui;
}



void Interfas::on_btnEnviar_clicked()
{
    QString tmp;
    tmp="          "+ui->tbxNMs->text();
    ui->tbxMsj->append(QString::fromStdString(usuario->name + ":"));
    ui->tbxMsj->append(tmp);
    ui->tbxNMs->setText("");
}

void Interfas::on_btnPublic_clicked()
{
    QString tmp;

    tmp=ui->tbxNPublic->text();
    ui->tbxPublic->append(QString::fromStdString(usuario->name+":"));
    ui->tbxPublic->append("");
    ui->tbxPublic->append(tmp);
    ui->tbxPublic->append("");
    ui->tbxNPublic->setText("");
}
