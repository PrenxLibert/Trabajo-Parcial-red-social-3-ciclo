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
    char nickname[10];
    char contrasena[10];
    ul numero;

    public:
    User(string name, string a, string u, string c, ul n = 0) {
            strcpy_s(nombre,name.c_str());
            strcpy_s(apellido, a.c_str());
            strcpy_s(nickname, u.c_str());
            strcpy_s(contrasena, c.c_str());

            numero = n;
        }
        User() {}

};

#endif // USUARIO_H
