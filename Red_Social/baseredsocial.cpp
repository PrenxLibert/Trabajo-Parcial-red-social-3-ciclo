
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


void baseredsocial::on_pushButton_clicked()
{
    QString nombre = ui->tbxUsername->text();
    ui->lineEdit_2->setText(nombre);
}
