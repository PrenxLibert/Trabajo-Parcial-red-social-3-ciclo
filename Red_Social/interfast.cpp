#include "interfast.h"
#include "ui_interfast.h"
#include "chat.h"

interfast::interfast(User* _us_log, QWidget *parent) :QDialog(parent), ui(new Ui::interfast)
{
    us_log = _us_log;
    ui->setupUi(this);
    //connect(ui->pshbu_mos_perfil,SIGMA(released()),this,SLOT(MathButtonPresend()));
}

interfast::~interfast()
{
    delete ui;
}


void interfast::on_pushButton_clicked()
{
    ui->chatText->append(QString::fromStdString(us_log->nickname) + ": " + ui->txtbox_envio->text());
    ui->txtbox_envio->setText(" ");
}

void interfast::on_pshbu_mos_perfil_clicked()
{

}



void interfast::on_btnAccept_clicked()
{
    short status = 1;
    //string temp;
    /*if()
    {

    }
    if()
    {

    }*/
    ofstream amigos_c("amiwis.txt", std::ios::app);
    amigos_c<<us_log->nickname<<","<<ui->ledt_nickname->text().toStdString()<<","<<status;
    amigos_c.close();
}

void interfast::on_btnDecline_clicked()
{
    short status = 0;
    ofstream amigos_c("amiwis.txt", std::ios::app);
    amigos_c<<us_log->nickname<<","<<ui->ledt_nickname->text().toStdString()<<","<<status;
    amigos_c.close();
}
