#include "interfast.h"
#include "ui_interfast.h"

interfast::interfast(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::interfast)
{
    ui->setupUi(this);
}

interfast::~interfast()
{
    delete ui;
}


void interfast::on_pushButton_clicked()
{
    ui->txtbx_mensajes->text()= ui->txtbx_mensajes->text()+"\n"+ui->txtbox_envio->text();
}
