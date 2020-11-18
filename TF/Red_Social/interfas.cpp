#include "interfas.h"
#include "ui_interfas.h"
#include "Message.h"

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

void Interfas::on_btnVchat_clicked()
{
     User aux("",ui->tbxIDF->text().toUInt(),""," ");
     amigo =usuarios->buscar(aux.id,aux);

     ui->lblNameF->setText(QString::fromStdString(amigo->name));

     ui->tbxMsj->setText("");

     for(int i=0;i < usuario->chats.size();++i){
         if((usuario->chats[i].IdU==usuario->id || usuario->chats[i].IdF==usuario->id ) && (usuario->chats[i].IdF==amigo->id || usuario->chats[i].IdU==amigo->id)){
            ui->tbxMsj->append(QString::fromStdString(usuario->chats[i].msj));
         }
     }

     ui->btnEnviar->setEnabled(true);
}

void Interfas::on_btnEnviar_clicked()
{
    QString tmp;
    tmp= QString::fromStdString(usuario->name) + ":"+ '\n' + "      "+ ui->tbxNMs->text();

    Mensaje sms(usuario->id,amigo->id,tmp.toStdString());

    usuario->chats.push_back(sms);
    amigo->chats.push_back(sms);

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


