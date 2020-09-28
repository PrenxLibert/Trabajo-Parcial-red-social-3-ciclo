#include "interfast.h"
#include "ui_interfast.h"
#include "chat.h"

interfast::interfast(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfast)
{
    ui->setupUi(this);
    connect(ui->tab_2,SIGMA(released()),this,SLOT(MathButtonPresend()));
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

void interfast::on_pshbu_mos_perfil_clicked()
{
}
