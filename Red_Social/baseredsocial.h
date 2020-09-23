#ifndef BASEREDSOCIAL_H
#define BASEREDSOCIAL_H

#include <QMainWindow>
#include "usuario.h"
QT_BEGIN_NAMESPACE
namespace Ui { class baseredsocial; }
QT_END_NAMESPACE

class baseredsocial : public QMainWindow
{
    Q_OBJECT


public:
    baseredsocial(QWidget *parent = nullptr);
    ~baseredsocial();

private slots:
    void on_pushButton_clicked();

private:
    Ui::baseredsocial *ui;
};
#endif // BASEREDSOCIAL_H
