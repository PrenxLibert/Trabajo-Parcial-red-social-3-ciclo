#include "interfas.h"
#include "ui_interfas.h"
#include "Message.h"
#include "Publicaciones.h"
#include "vizualizar.h"

Interfas::Interfas(User*& u,Coleccion* usuarios,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfas)
{
    ui->setupUi(this);

    usuario=u;
    this->usuarios=usuarios;

    publicaciones.cargar();

    auto IdU = [](Follow m, Follow n) {return m.idU > n.idU; };

    auto existenciaIdU=[](Follow a, Follow b){
        if(a.idU==b.idU){return true;}
        else return false;
    };

    followers= Followers(IdU,existenciaIdU);
    followers.cargar();


    ui->tbxName->setText(QString::fromStdString(usuario->name));
    ui->tbxMail->setText(QString::fromStdString(usuario->mail));
    ui->tbxID->setText(QString::number(usuario->id));
    ui->tbxDate->setText(QString::fromStdString(usuario->date));
    cant=0;

    Publicacion auxp(usuario->id,usuario->id,"","","",usuario->id);
    Publicacion* p=publicaciones.buscarU(auxp);

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
    int id=publicaciones.getCant();
    Publicacion aux(id+1,usuario->id,twet,usuario->name,usuario->date,0);

    ss << aux.id;
    tmp = ss.str();

    ui->tbxPublic->append(QString::fromStdString(tmp));
    ui->tbxPublic->append(QString::fromStdString(aux.name));
    ui->tbxPublic->append(QString::fromStdString(aux.twet));
    ui->tbxPublic->append(QString::fromStdString(aux.date));
    publicaciones.push(aux);
    publicaciones.saved(aux);
}

void Interfas::cargaPublic(){
    stringstream ss;
    string tmp;

    Publicacion auxp(0,amigo->id,"","","",0);
    Publicacion* p=publicaciones.buscarU(auxp);

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

        if(amigo!=nullptr){

            ui->tbxNameF->setText(QString::fromStdString(amigo->name));
            ui->tbxMailF->setText(QString::fromStdString(amigo->mail));
            ui->tbxIdF->setText(ui->tbxSearch->text());
            ui->tbxDateF->setText(QString::fromStdString(amigo->date));

            cargaPublic();
        }
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

        Interfas::ui->tbxPublic->append("ID "+QString::fromStdString(tmp1));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.name));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.twet));
        Interfas::ui->tbxPublic->append(QString::fromStdString(p.date));
        Interfas::ui->tbxPublic->append("LIKES  " + QString::fromStdString(tmp));
        Interfas::ui->tbxPublic->append("");
        Interfas::ui->tbxPublic->append("");

    };

    publicaciones.printL(print,50);

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
    int cant=followers.getCant();
    followers.print(print,cant);
}

void Interfas::on_btnComentar_clicked()
{

    if(ui->tbxCID->text()!=""){
        Publicacion auxp(ui->tbxCID->text().toInt(),0,"","","",0);
        Publicacion* p=publicaciones.buscarI(auxp);

        ui->tbxCID->setText("");

        Vizualizar *it= new Vizualizar(*p,*usuario,this);
        it->show();
    }
}


