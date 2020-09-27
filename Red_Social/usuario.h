#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include<string>
#include "ui_baseredsocial.h"


typedef unsigned long ul;
using namespace std;

struct User
{
    char nombre[10];
    char apellido[10];
    char usuario[10];
    char contrasena[10];
    ul numero;

    public:
    User(string name, string a, string u, string c, ul n = 0) {
            strcpy(nombre,name.c_str());
            strcpy(apellido, a.c_str());
            strcpy(usuario, u.c_str());
            strcpy(contrasena, c.c_str());

            numero = n;
        }
        User() {}

};

#endif // USUARIO_H
