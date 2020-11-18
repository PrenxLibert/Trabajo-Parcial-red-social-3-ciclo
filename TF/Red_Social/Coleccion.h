#ifndef COLECCION_H
#define COLECCION_H

#include "HashTable.h"
#include "User.h"


class Coleccion{
private:
    HashTable<User>coleccion;
    size_t cantidad;
    function<bool(User, User)> busqueda;
public:
    Coleccion(function<bool(User, User)> criterio,function<bool(User, User)> _busqueda){
        coleccion=HashTable<User>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Coleccion(){}

    void push(string name,User dato){
        coleccion[name].push(dato);
        cantidad++;
    }

    User* buscar(string name,User dato){
        return coleccion[name].buscar(dato,busqueda);
    }

    void cargar(){
        string id,email, name,date;
            ifstream lectura("users.tsv");
            while (getline(lectura, id, '\t')) {
                      getline(lectura, email, '\t');
                      getline(lectura, name, '\t');
                      getline(lectura, date);
                      User u(name,std::stoi(id),email,date);
                      push(name,u);

            }
            lectura.close();
    }
};

#endif // COLECCION_H
