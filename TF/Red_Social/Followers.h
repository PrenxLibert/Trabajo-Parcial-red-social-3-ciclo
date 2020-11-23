#ifndef FOLLOWERS_H
#define FOLLOWERS_H

#include "HashTable.h"
#include "Tree.h"
#include "Follow.h"


class Followers{
private:
    Tree<Follow>coleccion;
    size_t cantidad;
    function<bool(Follow , Follow)> busqueda;
public:
    Followers(function<bool(Follow, Follow)> criterio,function<bool(Follow, Follow)> _busqueda){
        coleccion=Tree<Follow>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Followers(){}

    void push(Follow dato){
        coleccion.push(dato);
        cantidad++;
    }

    Follow* buscar(Follow id){
        return coleccion.buscar(id,busqueda);
    }

    void print(function<void(Follow)>_print,int cant){
        coleccion.EnOrden(_print,cant);
    }
    size_t getCant(){
        return cantidad;
    }
    void cargar(){
        string idU,idF;
        QString idu,idf;
            ifstream lectura("followers.tsv");
            while (getline(lectura, idU, ',')) {
                      getline(lectura, idF);

                      idu=QString::fromStdString(idU);
                      idf=QString::fromStdString(idF);

                      Follow u(idu.toInt(),idf.toInt());
                      push(u);
            }
            lectura.close();
    }
    void saved(Follow u){
        ofstream escritura("followers.tsv",ios::app);
        escritura<<u.idU<< '\t' + u.idF +'\n';
        escritura.close();
    }
};

#endif // FOLLOWERS_H
