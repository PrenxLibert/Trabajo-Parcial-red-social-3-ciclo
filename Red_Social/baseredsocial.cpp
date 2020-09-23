
#include "baseredsocial.h"
#include "ui_baseredsocial.h"
#include "string"
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
    //Usuario(QString name, QString a, QString u, QString , ul n)
    usr1 = new Usuario(ui->tbxName->text(), ui->tbxLastname->text(), ui->tbxUsrReg->text(),ui->tbxContrasena->text(), (ui->tbxPhone->text()).toULong());

}



void baseredsocial::on_btnLogin_clicked()
{
    /*if()
    {

    }*/
}
