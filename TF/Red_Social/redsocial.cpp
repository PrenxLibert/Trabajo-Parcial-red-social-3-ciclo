#include "redsocial.h"
#include "ui_redsocial.h"
#include "interfas.h"

RedSocial::RedSocial(QWidget *parent): QMainWindow(parent), ui(new Ui::RedSocial){
    ui->setupUi(this);
    auto edad = [](User m, User n) {return m.userName > n.userName; };
    auto print = [](User c) {};
    usuarios=HashTable<User>(edad,print);
}

RedSocial::~RedSocial()
{
    delete ui;
}

bool RedSocial:: data(){
    bool validador=false;

    if(ui->tbxPss->text()!= "" && ui->tbxPss->text()==ui->tbxCPss->text()){

        if(ui->tbxName->text()!="" && ui->tbxLastName->text()!="" && ui->tbxOld->text()!="" && ui->tbxUser->text()!=""){
            validador=true;
        }else QMessageBox::information(this,tr("Error"),tr("Debe llenar todos los datos"));

    }else QMessageBox::information(this,tr("Password"),tr("Las contraseñas no cinciden"));

    return validador;
}

bool RedSocial:: Ldata(){
    bool validador=false;
    if(ui->tbxLUser->text()!="" && ui->tbxLPss->text()!="")
        validador=true;
    return validador;
}

void RedSocial::Loged(User *u){

    Interfas *it= new Interfas(u,this);
    it->show();
}

void RedSocial::Login(User u){

    auto criterio=[](User a, User b){
        if(a.userName==b.userName && a.password==b.password){return true;}
        else return false;
    };

    if(usuarios[u.userName].Exist(u,criterio)){
        User *us=usuarios[u.userName].buscar(u,criterio);
        QMessageBox::information(this,tr("Loged"),tr("Usted se ha logueado correctamente"));
        Loged(us);

    }else{
         QMessageBox::information(this,tr("Loged"),tr("Usted  no se ha logueado "));
    }
}

void RedSocial::on_btnReg_clicked()
{
    if(data()){
        User u(ui->tbxName->text().toStdString(),ui->tbxLastName->text().toStdString(),ui->tbxPss->text().toStdString(),ui->tbxOld->text().toShort(),ui->tbxUser->text().toStdString());
        usuarios[u.userName].push(u);

        QMessageBox::information(this,tr("Registred"),tr("Usted se ha registrado correctamente"));
        Login(u);
    }
}



void RedSocial::on_btnLog_clicked()
{
   if(Ldata()){
       User u("","",ui->tbxLPss->text().toStdString(),0,ui->tbxLUser->text().toStdString());
       Login(u);
   }
}
