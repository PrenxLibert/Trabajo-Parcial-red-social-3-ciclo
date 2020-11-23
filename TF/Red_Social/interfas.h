#ifndef INTERFAS_H
#define INTERFAS_H

#include <QDialog>
#include "Library.h"
#include "User.h"
#include "Coleccion.h"
#include "Publicaciones.h"
#include "Followers.h"

namespace Ui {
class Interfas;
}

class Interfas : public QDialog
{
    Q_OBJECT

public:
    explicit Interfas(User*& u,Coleccion* usuarios,QWidget *parent = nullptr);
    ~Interfas();

    void cargaPublic();

private slots:

    void on_btnEnviar_clicked();

    void on_btnPublic_clicked();

    void on_btnVchat_clicked();

    void on_btnSearch_clicked();

    void on_btnOlikes_clicked();

    void on_btnFollow_clicked();

    void on_btnMFollow_clicked();

    void on_btnComentar_clicked();

private:
    Ui::Interfas *ui;
    User *usuario;
    User *amigo;
    Coleccion* usuarios;
    Publicaciones publicacionesU;
    Publicaciones publicacionesL;
    Followers followers;
    int cant;
};

#endif // INTERFAS_H
