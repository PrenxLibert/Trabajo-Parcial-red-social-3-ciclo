#include "interfas.h"
#include "ui_interfas.h"

Interfas::Interfas(User*& u,Coleccion* usuarios,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfas)
{
    ui->setupUi(this);

    usuario=u;
    this->usuarios=usuarios;

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
    User aux(ui->tbxNameF->text().toStdString(),0,ui->tbxMailF->text().toStdString()," ");
    User* f =usuarios->buscar(aux.id,aux);

    QString tmp;
    tmp= QString::fromStdString(usuario->name) + ":"+ '\n' + ui->tbxNMs->text();
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
