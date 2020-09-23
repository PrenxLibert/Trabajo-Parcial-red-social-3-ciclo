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
    Usuario* usr1;

public:
    baseredsocial(QWidget *parent = nullptr);
    ~baseredsocial();

private slots:
    
    void on_btnRegister_clicked();
    
    void on_btnLogin_clicked();

private:
    Ui::baseredsocial *ui;
};
#endif // BASEREDSOCIAL_H
