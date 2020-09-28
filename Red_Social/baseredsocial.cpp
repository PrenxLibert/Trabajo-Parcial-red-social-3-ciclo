
#include "baseredsocial.h"
#include "ui_baseredsocial.h"
#include "ui_interfast.h"
#include "interfast.h"
#include "string"
#include <QMessageBox>
#include "lista.h"
using std::string;

baseredsocial::baseredsocial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::baseredsocial)
{
    ui->setupUi(this);
    usrlist = new List(); usrlist->read();
    //usrlist->leer();//se cargan todos los usuarios anteriormente añadidos

}

baseredsocial::~baseredsocial()
{
    delete ui;
}
//lista
void baseredsocial::on_btnRegister_clicked()
{

       if(ui->tbxPasswordIn->text() == ui->tbxPasswordCon->text())
       {
            //Usuario(QString name, QString a, QString u, QString c, ul n)
           User* temp_usr = new User(ui->tbxName->text().toStdString(), ui->tbxLastname->text().toStdString(), ui->tbxUsrReg->text().toStdString(),ui->tbxPasswordIn->text().toStdString(),(ui->tbxPhone->text()).toStdString());
       //lista->guardardatosdeusuarioentexto()
            usrlist->push(*temp_usr);
            usrlist->write(*temp_usr);//guarda en la lista el nuevo usuario registrado
       }
       else
       {
           QMessageBox::information(this, tr("Error!"), tr("Las contraseñas no coinciden")); //(this, titulo del messagebox, contenido del mensaje);
       }

}



void baseredsocial::on_btnLogin_clicked()
{

    interfast i1; //string nickname, string contrasena
    if(usrlist->buscar(ui->tbxUsrLog->text().toStdString(), ui->tbxContrasena->text().toStdString()))
    {
        QMessageBox::information(this, tr("Inicio de sesión"), tr("Bienvenido! ACCESO CONCEDIDO! Cierra para continuar"));
        i1.setModal(true);
        i1.exec();
    }
    else
    {
        QMessageBox::information(this, tr("Inicio de sesión"), tr("ACCESO DENEGADO"));
    }
}
