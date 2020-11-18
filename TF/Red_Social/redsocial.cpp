#include "redsocial.h"
#include "ui_redsocial.h"
#include "interfas.h"
#include "Library.h"
#include <QFile>
#include <fstream>

RedSocial::RedSocial(QWidget *parent): QMainWindow(parent), ui(new Ui::RedSocial){
    ui->setupUi(this);
    auto edad = [](User m, User n) {return m.name > n.name; };
    usuarios=Coleccion(edad);
    //usuarios.cargar();
    int i=0;
    string id,email, name,date;
        ifstream lectura("users.tsv");
        while (getline(lectura, id, '\t')) {
                  getline(lectura, email, '\t');
                  getline(lectura, name, '\t');
                  getline(lectura, date);
                  User u(name,std::stoi(id),email,date);
                  usuarios.push(name,u);


        }
        lectura.close();

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

    if(usuarios.buscar(u.name,u,criterio)!=nullptr){
        User *us=usuarios.buscar(u.name,u,criterio);
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
        usuarios.push(u.name,u);

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
