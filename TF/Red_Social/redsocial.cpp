#include "redsocial.h"
#include "ui_redsocial.h"
#include "interfas.h"

RedSocial::RedSocial(QWidget *parent): QMainWindow(parent), ui(new Ui::RedSocial){
    ui->setupUi(this);
    auto edad = [](User m, User n) {return m.name > n.name; };
    auto print = [](User c) {};
    usuarios=HashTable<User>(edad,print);
}

RedSocial::~RedSocial()
{
    delete ui;
}

bool RedSocial:: data(){
    bool validador=false;


     if(ui->tbxName->text()!="" && ui->tbxID->text()!="" && ui->tbxMail->text()!="" && ui->tbxDate->text()!=""){
         validador=true;
     }else QMessageBox::information(this,tr("Error"),tr("Debe llenar todos los datos"));



    return validador;
}

bool RedSocial:: Ldata(){
    bool validador=false;
    if(ui->tbxCName->text()!="" && ui->tbxCMail->text()!="")
        validador=true;
    return validador;
}

void RedSocial::Loged(User* u){

    Interfas *it= new Interfas(u,this);
    it->show();
}

void RedSocial::Login(User u){

    auto criterio=[](User a, User b){
        if(a.mail==b.mail && a.name==b.name){return true;}
        else return false;
    };

    if(usuarios[u.name].buscar(u,criterio)!=nullptr){
        User *us=usuarios[u.name].buscar(u,criterio);
        QMessageBox::information(this,tr("Loged"),tr("Usted se ha logueado correctamente"));
        Loged(us);

    }else{
         QMessageBox::information(this,tr("Loged"),tr("Usted  no se ha logueado "));
    }
}

void RedSocial::on_btnReg_clicked()
{
    if(data()){
        User u(ui->tbxName->text().toStdString(),ui->tbxID->text().toULong(),ui->tbxMail->text().toStdString(),ui->tbxDate->text().toStdString());
        usuarios[u.name].push(u);

        QMessageBox::information(this,tr("Registred"),tr("Usted se ha registrado correctamente"));
        Login(u);
    }
}



void RedSocial::on_btnLog_clicked()
{
   if(Ldata()){
       User u(ui->tbxCName->text().toStdString(),0,ui->tbxCMail->text().toStdString()," ");
       Login(u);
   }
}
