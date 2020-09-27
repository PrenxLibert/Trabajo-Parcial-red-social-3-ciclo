
#include "baseredsocial.h"
#include "ui_baseredsocial.h"
#include "ui_interfast.h"
#include "string"
#include <QMessageBox>
#include "lista.h"
using std::string;

baseredsocial::baseredsocial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::baseredsocial)
{
    ui->setupUi(this);
    usrlist->leer();//se cargan todos los usuarios anteriormente añadidos

}

baseredsocial::~baseredsocial()
{
    delete ui;
}

void baseredsocial::on_btnRegister_clicked()
{

       if(ui->tbxPasswordIn->text()==ui->tbxPasswordCon->text()){
            //Usuario(QString name, QString a, QString u, QString c, ul n)
            usr1 = new User(ui->tbxName->text().toStdString(), ui->tbxLastname->text().toStdString(), ui->tbxUsrReg->text().toStdString(),ui->tbxContrasena->text().toStdString(),(ui->tbxPhone->text()).toULong());
            usrlist->push(*usr1);
            usrlist->guardar();//guarda en la lista el nuevo usuario registrado
       }else{
           QMessageBox::information(this,tr("error"),tr("las contraseñas no coinciden"));
       }

}



void baseredsocial::on_btnLogin_clicked()
{
    if(usrlist->buscar(ui->tbxUsrLog->text().toStdString(),ui->tbxContrasena->text().toStdString())){
         QMessageBox::information(this,tr("prueba"),tr("iniciaste secion"));
    }else{
        QMessageBox::information(this,tr("error"),tr("este nombre de usuario no ha sido hallado"));
    }
}
