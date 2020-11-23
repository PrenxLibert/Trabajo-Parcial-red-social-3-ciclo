#ifndef VIZUALIZAR_H
#define VIZUALIZAR_H

#include <QDialog>
#include <Comments.h>
#include <Publicacion.h>
#include <User.h>

namespace Ui {
class Vizualizar;
}

class Vizualizar : public QDialog
{
    Q_OBJECT

public:
    explicit Vizualizar(Publicacion p,User u,QWidget *parent = nullptr);
    ~Vizualizar();

private slots:
    void on_pbtn_comentar_clicked();

private:
    Ui::Vizualizar *ui;
    Comments comentarios;
    Publicacion publicacion;
    User u;
};

#endif // VIZUALIZAR_H
