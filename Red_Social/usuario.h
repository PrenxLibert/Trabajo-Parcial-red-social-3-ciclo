#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include<string>
#include "ui_baseredsocial.h"


typedef unsigned long ul;
using namespace std;

struct User
{
    string nombre;
    string apellido;
    string nickname;
    string psswrd;
    ul numero;

    public:
    User(string n = " ", string a = " ", string ni = " ", string c = " ", ul nu = 0)
    {
        nombre = n;
        apellido = a;
        nickname = ni;
        psswrd = c;
        numero = nu;
    }

};

#endif // USUARIO_H
