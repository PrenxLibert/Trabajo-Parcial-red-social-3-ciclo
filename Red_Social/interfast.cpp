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

