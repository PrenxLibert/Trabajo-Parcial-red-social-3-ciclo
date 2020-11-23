#include "redsocial.h"
#include "ui_redsocial.h"
#include "interfas.h"
#include "Library.h"
#include <QFile>
#include <fstream>

RedSocial::RedSocial(QWidget *parent): QMainWindow(parent), ui(new Ui::RedSocial){
    ui->setupUi(this);

    usuarios.cargar();
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
    if(ui->tbxCID->text()!="")
        validador=true;
    return validador;
}

void RedSocial::Loged(User* u){

    Interfas *it= new Interfas(u,&usuarios,this);
    it->show();
}

void RedSocial::Login(User u){

    if(usuarios.buscarI(u.id,u)!=nullptr){
        User *us=usuarios.buscarI(u.id,u);
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
        usuarios.push(ui->tbxID->text().toStdString(),u);

        QMessageBox::information(this,tr("Registred"),tr("Usted se ha registrado correctamente"));
        usuarios.saved(u);
        Login(u);
    }
}



void RedSocial::on_btnLog_clicked()
{
   if(Ldata()){
       User u(" ",ui->tbxCID->text().toUInt(),""," ");
       Login(u);
   }
}
