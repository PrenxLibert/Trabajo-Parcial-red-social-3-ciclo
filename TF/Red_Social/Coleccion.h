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
        busqueda=_busqueda;
        cantidad=0;

    }
    Coleccion(){}

    void push(string name,User dato){
       coleccion[name].push(dato);

        cantidad++;
    }

    User* buscar(int id,User dato){

        stringstream ss;
        ss << id;
        string tmp = ss.str();
        return coleccion[tmp].buscar(dato,busqueda);
    }

    size_t getCant(){
        return cantidad;
    }

    void cargar(){
        string id,email, name,date;
            ifstream lectura("users.tsv");
            while (getline(lectura, id, '\t')) {
                      getline(lectura, email, '\t');
                      getline(lectura, name, '\t');
                      getline(lectura, date);
                      User u(name,std::stoi(id),email,date);
                      push(id,u);


            }
            lectura.close();
    }

    void saved(User u){

        u.id=cantidad;
        ofstream escritura("users.tsv",ios::app);
        escritura<<u.id<< '\t' << u.mail <<'\t' <<u.name<<'\t'<<u.date+'\n';
        escritura.close();
    }
};

#endif // COLECCION_H
