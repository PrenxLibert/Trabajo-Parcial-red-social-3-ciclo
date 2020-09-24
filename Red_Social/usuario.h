#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include "ui_baseredsocial.h"
typedef unsigned long ul;
using namespace std;

struct Usuario{

    QString nombre;
    QString apellido;
    QString usuario;
    QString contrasena;
    ul numero;

    Usuario(QString name = " ", QString a = " ", QString u= " ", QString c= " ", ul n = 0) : nombre(name), apellido(a), usuario(u), contrasena(c), numero(n)
    {

    }
};

#endif // USUARIO_H
