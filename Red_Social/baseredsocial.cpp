
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
}

baseredsocial::~baseredsocial()
{
    delete ui;
}

void baseredsocial::on_btnRegister_clicked()
{
    if(ui->tbxName->text()!=""  && ui->tbxLastname->text()!="" && ui->tbxUsrReg->text()!="" && ui->tbxContrasena->text()!=""){
       if(ui->tbxPasswordIn->text()==ui->tbxPasswordCon->text()){
            //Usuario(QString name, QString a, QString u, QString c, ul n)
            usr1 = new User(ui->tbxName->text(), ui->tbxLastname->text(), ui->tbxUsrReg->text(),ui->tbxContrasena->text(),(ui->tbxPhone->text()).toULong());
            usrlist->push(*usr1);
       }else{
           QMessageBox::information(this,tr("error"),tr("las contraseñas no coinciden"));
       }
    }else{
        QMessageBox::information(this,tr("error"),tr("debe llenar todos los campos"));
    }
}



void baseredsocial::on_btnLogin_clicked()
{

}
