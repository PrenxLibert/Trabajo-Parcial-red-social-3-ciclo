#include "interfas.h"
#include "ui_interfas.h"
#include "Message.h"
#include "Publicaciones.h"

Interfas::Interfas(User*& u,Coleccion* usuarios,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfas)
{
    ui->setupUi(this);

    usuario=u;
    this->usuarios=usuarios;
//##########################################################################
    auto IDU = [](Publicacion m, Publicacion n) {return m.idU > n.idU; };

    auto existenciaU=[](Publicacion a, Publicacion b){
        if(a.idU==b.idU){return true;}
        else return false;
    };

    publicacionesU = Publicaciones(IDU,existenciaU);
    publicacionesU.cargar();
//###########################################################################

    auto likes = [](Publicacion m, Publicacion n) {return m.pubdate > n.pubdate; };

    auto existenciaL=[](Publicacion a, Publicacion b){
        if(a.pubdate==b.pubdate){return true;}
        else return false;
    };

    publicacionesL = Publicaciones(likes,existenciaL);
    publicacionesL.cargar();

    ui->tbxName->setText(QString::fromStdString(usuario->name));
    ui->tbxMail->setText(QString::fromStdString(usuario->mail));
    ui->tbxID->setText(QString::number(usuario->id));
    ui->tbxDate->setText(QString::fromStdString(usuario->date));
    cant=0;

    Publicacion auxp(usuario->id,usuario->id,"","","",usuario->id);
    Publicacion* p=publicacionesU.buscar(auxp);

    ui->tbxMPublic->append(QString::fromStdString(p->name));
    ui->tbxMPublic->append(QString::fromStdString(p->twet));
    ui->tbxMPublic->append(QString::fromStdString(p->date));
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
    stringstream ss;
    string tmp;
    string twet=ui->tbxNPublic->text().toStdString();
    Publicacion aux(1001,usuario->id,twet,usuario->name,usuario->date,0);

    ss << aux.id;
    tmp = ss.str();

    ui->tbxPublic->append(QString::fromStdString(tmp));
    ui->tbxPublic->append(QString::fromStdString(aux.name));
    ui->tbxPublic->append(QString::fromStdString(aux.twet));
    ui->tbxPublic->append(QString::fromStdString(aux.date));
    publicacionesU.saved(aux);
}

void Interfas::cargaPublic(){
    stringstream ss;
    string tmp;

    Publicacion auxp(0,amigo->id,"","","",0);
    Publicacion* p=publicacionesU.buscar(auxp);

    ss << p->id;
    tmp = ss.str();

    ui->tbxPublicF->append(QString::fromStdString(tmp));
    ui->tbxPublicF->append(QString::fromStdString(p->name));
    ui->tbxPublicF->append(QString::fromStdString(p->twet));
    ui->tbxPublicF->append(QString::fromStdString(p->date));
}

void Interfas::on_btnSearch_clicked()
{
    ui->tbxPublicF->setText("");
    if(ui->tbxSearch->text()!=""){
        User aux("",ui->tbxSearch->text().toUInt(),""," ");
        amigo =usuarios->buscar(aux.id,aux);

        ui->tbxNameF->setText(QString::fromStdString(amigo->name));
        ui->tbxMailF->setText(QString::fromStdString(amigo->mail));
        ui->tbxIdF->setText(ui->tbxSearch->text());
        ui->tbxDateF->setText(QString::fromStdString(amigo->date));

        cargaPublic();
    }



}

void Interfas::on_btnOlikes_clicked(){
    ui->tbxPublic->setText("");


    auto print=[=](Publicacion p){
        stringstream ss;
        string tmp;
        ss << p.pubdate;
        tmp = ss.str();

        Interfas::ui->tbxPublic->append(QString::fromStdString(tmp));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.name));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.twet));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.date));
        Interfas::ui->tbxPublic->append("");
        Interfas::ui->tbxPublic->append("");

    };

    publicacionesL.print(print,50);

}

/*
        stringstream ss;
        string tmp;
        ss << p->idU;
        tmp = ss.str();
        Interfas::ui->tbxPublic->append("ID: "+ QString::fromStdString(tmp));
*/
