#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include "ui_baseredsocial.h"
typedef unsigned long ul;
using namespace std;

struct User
{
    QString nombre;
    QString apellido;
    QString usuario;
    QString contrasena;
    ul numero;
    public:
    User(QString name = " ", QString a = "pelotudos", QString u = "pussydestroyer", QString c = "************", ul n = 0) : nombre(name), apellido(a), usuario(u), contrasena(c), numero(n) {}

};

#endif // USUARIO_H
