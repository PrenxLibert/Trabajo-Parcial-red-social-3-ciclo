#include "interfas.h"
#include "ui_interfas.h"

Interfas::Interfas(User*& u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfas)
{
    ui->setupUi(this);
    usuario=u;


}

Interfas::~Interfas()
{
    delete ui;
}


