#include "red_social.h"
#include "ui_red_social.h"

Red_social::Red_social(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Red_social)
{
    ui->setupUi(this);
}

Red_social::~Red_social()
{
    delete ui;
}
