#ifndef REDSOCIAL_H
#define REDSOCIAL_H
#include "User.h"
#include "Coleccion.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RedSocial; }
QT_END_NAMESPACE

class RedSocial : public QMainWindow
{
    Q_OBJECT

public:
    RedSocial(QWidget *parent = nullptr);
    ~RedSocial();

    bool data();
    bool Ldata();
    void Loged(User* u);
    void Login(User u);

private slots:
    void on_btnReg_clicked();


    void on_btnLog_clicked();

private:
    Ui::RedSocial *ui;
    Coleccion usuarios;
};
#endif // REDSOCIAL_H
