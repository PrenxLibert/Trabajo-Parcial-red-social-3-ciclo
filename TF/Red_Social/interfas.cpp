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
//############################################################################
    auto IdU = [](Follow m, Follow n) {return m.idU > n.idU; };

    auto existenciaIdU=[](Follow a, Follow b){
        if(a.idU==b.idU){return true;}
        else return false;
    };

    followers= Followers(IdU,existenciaIdU);
    followers.cargar();
//#############################################################################

    auto IDP = [](Comment m, Comment n) {return m.idPub > n.idPub; };

    auto existenciaIdP=[](Comment a, Comment b){
        if(a.idPub==b.idPub){return true;}
        else return false;
    };

    comentarios= Comments(IDP,existenciaIdP);
    comentarios.cargar();

//##############################################################################

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
        stringstream ss1;
        string tmp1;

        ss << p.pubdate;
        tmp = ss.str();

        ss1 << p.id;
        tmp1 = ss1.str();

        Interfas::ui->tbxPublic->append("ID"+QString::fromStdString(tmp1));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.name));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.twet));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.date));
        Interfas::ui->tbxPublic->append("LIKES  " + QString::fromStdString(tmp));
        Interfas::ui->tbxPublic->append("");
        Interfas::ui->tbxPublic->append("");

    };

    publicacionesL.print(print,50);

}

void Interfas::on_btnFollow_clicked()
{
    Follow aux(usuario->id,ui->tbxSearch->text().toInt());
    followers.push(aux);
    followers.saved(aux);
}

void Interfas::on_btnMFollow_clicked()
{
    auto print=[=](Follow f){

        if(f.idF==Interfas::usuario->id){

            User* u=new User("",f.idU,"","");
            u=Interfas::usuarios->buscar(f.idU,*u);

            Interfas::ui->tbxFollowers->append(QString::fromStdString(u->name));
        }

    };
    followers.print(print,50);
}

void Interfas::CargaComments(){
    int id=ui->tbxCID->text().toInt();

    if(id>0){
        auto print=[=](Comment c){

            if(c.idPub==id){

                Comment* c=new Comment(0,id,"","");
                c=Interfas::comentarios.buscar(*c);
                Interfas::ui->tbxComentarios->append(QString::fromStdString(c->text));
                Interfas::ui->tbxComentarios->append("");
                Interfas::ui->tbxComentarios->append("");
            }

        };
        comentarios.print(print,50);
    }
}

void Interfas::on_btnComentar_clicked()
{
    ui->tbxComentarios->setText("");
    CargaComments();

    QString tmp;

    tmp=ui->tbxNComment->text();
    int IdPub=ui->tbxCID->text().toInt();
    if(IdPub!=0){
    Comment aux(0,IdPub,usuario->date,tmp.toStdString());


    ui->tbxComentarios->append(QString::fromStdString(aux.text));
    ui->tbxNComment->setText("");

    comentarios.push(aux);

    comentarios.saved(aux);
    }
}
/*
        stringstream ss;
        string tmp;
        ss << p->idU;
        tmp = ss.str();
        Interfas::ui->tbxPublic->append("ID: "+ QString::fromStdString(tmp));
*/


