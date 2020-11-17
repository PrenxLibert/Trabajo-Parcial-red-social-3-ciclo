#ifndef COLECCION_H
#define COLECCION_H

#include "HashTable.h"
#include "User.h"

template <typename t>

class Coleccion{
private:
    HashTable<t>coleccion;
    size_t cantidad;
public:
    Coleccion(function<bool(t, t)> criterio, function <void(t)> print){
        coleccion=HashTable<t>(criterio,print);
        cantidad=0;
    }
    Coleccion(){}

    void push(string name,t dato){
        coleccion[name].push(dato);
        cantidad++;
    }

    t* buscar(string name,t dato,function<bool(t, t)> criterio){
        return coleccion[name].buscar(dato,criterio);
    }

    void cargar(){
        ifstream archivo("usuarios.txt", std::ios::app);
        if(!archivo.fail())
        {
            User temporal_user = User();

            while(!archivo.eof())
            {


            }
            archivo.close();
        }
    }
};

#endif // COLECCION_H
