#include "interfast.h"
#include "ui_interfast.h"
#include "ui_baseredsocial.h"
#include "baseredsocial.h"
#include "chat.h"


interfast::interfast(User* _us_log, QWidget *parent) : QDialog(parent), ui(new Ui::interfast)
{
    ui->setupUi(this);

    connect(ui->tab_2,SIGMA(released()),this,SLOT(MathButtonPresend()));

    us_log = _us_log;

}

interfast::~interfast()
{
    delete ui;
}


void interfast::on_pushButton_clicked()
{
    ui->chatText->append(QString::fromStdString(us_log->nickname)+ ": " + ui->txtbox_envio->text());
    ui->txtbox_envio->setText(" ");
}

void interfast::on_pshbu_mos_perfil_clicked()
{

}
