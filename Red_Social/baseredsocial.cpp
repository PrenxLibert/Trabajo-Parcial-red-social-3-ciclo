
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
