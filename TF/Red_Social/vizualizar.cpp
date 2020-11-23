#include "vizualizar.h"
#include "ui_vizualizar.h"

Vizualizar::Vizualizar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vizualizar)
{
    ui->setupUi(this);
}

Vizualizar::~Vizualizar()
{
    delete ui;
}
