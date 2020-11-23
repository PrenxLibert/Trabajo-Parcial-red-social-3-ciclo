#ifndef PUBLICACIONES_H
#define PUBLICACIONES_H
#include "Publicacion.h"
#include "HashTable.h"

class Publicaciones{
private:
    Tree<Publicacion>coleccion;
    size_t cantidad;
    function<bool(Publicacion, Publicacion)> busqueda;
public:
    Publicaciones(function<bool(Publicacion, Publicacion)> criterio,function<bool(Publicacion, Publicacion)> _busqueda){
        coleccion=Tree<Publicacion>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Publicaciones(){}

    void push(Publicacion dato){
        dato.id=cantidad+1;
        coleccion.push(dato);
        cantidad++;
    }

    Publicacion* buscar(Publicacion dato){
        return coleccion.buscar(dato,busqueda);
    }

    void print(function<void(Publicacion)>_print,int cant){
        coleccion.EnOrden(_print,cant);
    }

    void cargar(){
        string id,idU, twet,name,date,pubdate;
            ifstream lectura("publications.tsv");
            while (getline(lectura, id, '\t')) {
                      getline(lectura, id, '\t');
                      getline(lectura, idU, '\t');
                      getline(lectura, twet, '\t');
                      getline(lectura, name, '\t');
                      getline(lectura, date, '\t');
                      getline(lectura, pubdate);
                      Publicacion p ( stoi(id), stoi(idU), twet, name, date,stoi(pubdate));
                      push(p);
                      ++cantidad;


            }
            lectura.close();
    }
    //
    void saved(Publicacion u){
        ++cantidad;
        ofstream escritura("publications.tsv",ios::app);
        escritura<<cantidad<< '\t'<<cantidad<<'\t' <<u.idU<< '\t'<< u.twet +'\t'+u.name+'\t' +u.date<<'\t'<< u.pubdate<<'\n';
        escritura.close();
    }
};

#endif // PUBLICACIONES_H
