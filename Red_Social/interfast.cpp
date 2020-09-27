#include "interfast.h"
#include "ui_interfast.h"
#include "chat.h"

interfast::interfast(QWidget *parent) :
    QDialog(parent),
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
    ui->chatText->append("Leonardo: " + ui->txtbox_envio->text());
    ui->txtbox_envio->setText(" ");
}
