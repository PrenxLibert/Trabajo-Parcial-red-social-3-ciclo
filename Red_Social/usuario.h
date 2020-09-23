#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

using namespace std;

struct Usuario{

    string nombre;
    string apellido;
    string usuario;
    string contrasena;
    int numero;

    Usuario(string name,string a, string u, string c, int n){
        nombre=name;
        apellido=a;
        usuario=u;
        contrasena=c;
        numero=n;
    }
};

#endif // USUARIO_H
