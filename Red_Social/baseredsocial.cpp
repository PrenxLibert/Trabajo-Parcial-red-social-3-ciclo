#include "baseredsocial.h"
#include "ui_baseredsocial.h"

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

