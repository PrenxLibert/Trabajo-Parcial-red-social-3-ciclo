#ifndef INTERACIONES_H
#define INTERACIONES_H
#include "HashTable.h"
#include "Tree.h"
#include "Interaccion.h"


class Interacciones{
private:
    Tree<Interaccion>coleccion;
    size_t cantidad;
    function<bool(Interaccion , Interaccion)> busqueda;
public:
    Interacciones(function<bool(Interaccion, Interaccion)> criterio,function<bool(Interaccion, Interaccion)> _busqueda){
        coleccion=Tree<Interaccion>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Interacciones(){}

    void push(Interaccion dato){
        coleccion.push(dato);
        cantidad++;
    }

    Interaccion* buscar(Interaccion id){
        return coleccion.buscar(id,busqueda);
    }

    void print(function<void(Interaccion)>_print,int cant){
        coleccion.EnOrden(_print,cant);
    }

    void cargar(){
        string idU,idPub, date, share;
            ifstream lectura("interaction.tsv");
            while (getline(lectura, idU, '\t')) {
                      getline(lectura, idPub, '\t');
                      getline(lectura, date, '\t');
                      getline(lectura, share);

                      //idu=QString::fromStdString(idU);
                      //idf=QString::fromStdString(idF);

                      Interaccion u(stoi(idU),stoi(idPub),date,share);
                      push(u);
                      ++cantidad;
            }
            lectura.close();
    }
    void saved(Interaccion u){
        ++cantidad;
        ofstream escritura("followers.tsv",ios::app);
        escritura<<u.idU<< '\t' + u.idPub << '\t' << u.idPub << '\t' << u.date << u.share << '\n';
        escritura.close();
    }
};
#endif // INTERACIONES_H
