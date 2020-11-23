#ifndef COLECCION_H
#define COLECCION_H

#include "HashTable.h"
#include "User.h"


class Coleccion{
private:
    HashTable<User>ID;
    HashTable<User>Name;
    size_t cantidad;
public:
    Coleccion(){
        auto id = [](User m, User n) {return m.id > n.id; };
        auto name = [](User m, User n) {return m.name > n.name; };

        ID=HashTable<User>(id);
        Name=HashTable<User>(name);

        cantidad=0;

    }

    void push(string name,User dato){
        dato.id=cantidad+1;

        ID[name].push(dato);
        Name[dato.name].push(dato);

        cantidad++;
    }

    User* buscarI(int id,User dato){

        auto existenciaID=[](User a, User b){
            if(a.id==b.id){return true;}
            else return false;
        };

        stringstream ss;
        ss << id;
        string tmp = ss.str();
        return ID[tmp].buscar(dato,existenciaID);
    }

    User* buscarN(User dato){

        auto existenciaID=[](User a, User b){
            if(a.name==b.name && a.mail==b.mail){return true;}
            else return false;
        };

        return ID[dato.name].buscar(dato,existenciaID);
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
        ofstream escritura("users.tsv",ios::app);
        escritura<<u.id<< '\t' + u.mail +'\t' +u.name+'\t'+u.date+'\n';
        escritura.close();
    }
};

#endif // COLECCION_H
