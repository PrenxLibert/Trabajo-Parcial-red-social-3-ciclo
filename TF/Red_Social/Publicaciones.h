#ifndef PUBLICACIONES_H
#define PUBLICACIONES_H
#include "Publicacion.h"
#include "HashTable.h"

class Publicaciones{
private:
    HashTable<Publicacion>coleccion;
    size_t cantidad;
    function<bool(Publicacion, Publicacion)> busqueda;
public:
    Publicaciones(function<bool(Publicacion, Publicacion)> criterio,function<bool(Publicacion, Publicacion)> _busqueda){
        coleccion=HashTable<Publicacion>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Publicaciones(){}

    void push(string name,Publicacion dato){
        coleccion[name].push(dato);
        cantidad++;
    }

    Publicacion* buscar(int id,Publicacion dato){
        stringstream ss;
        ss << id;
        string tmp = ss.str();
        return coleccion[tmp].buscar(dato,busqueda);
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
                      Publicacion p ( stoi(id), stoi(idU), twet, name, date,stoi( pubdate));
                      push(idU,p);


            }
            lectura.close();
    }
};

#endif // PUBLICACIONES_H
