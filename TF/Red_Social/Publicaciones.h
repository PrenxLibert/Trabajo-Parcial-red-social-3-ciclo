#ifndef PUBLICACIONES_H
#define PUBLICACIONES_H
#include "Publicacion.h"
#include "HashTable.h"

class Publicaciones{
private:
    Tree<Publicacion>Usuarios;
    Tree<Publicacion>Likes;
    Tree<Publicacion>ID;

    size_t cantidad;
public:
    Publicaciones(){

        auto IDU = [](Publicacion m, Publicacion n) {return m.idU > n.idU; };
        auto likes = [](Publicacion m, Publicacion n) {return m.pubdate <= n.pubdate; };
        auto id = [](Publicacion m, Publicacion n) {return m.id <= n.id; };

        Usuarios=Tree<Publicacion>(IDU);
        Likes=Tree<Publicacion>(likes);
        ID=Tree<Publicacion>(id);

        cantidad=0;
    }

    void push(Publicacion dato){
        dato.id=cantidad+1;
        Usuarios.push(dato);
        Likes.push(dato);
        ID.push(dato);
        cantidad++;
    }

    Publicacion* buscarU(Publicacion dato){
        auto existenciaU=[](Publicacion a, Publicacion b){
            if(a.idU==b.idU){return true;}
            else return false;
        };
        return Usuarios.buscar(dato,existenciaU);
    }

    Publicacion* buscarL(Publicacion dato){

        auto existenciaL=[](Publicacion a, Publicacion b){
            if(a.pubdate==b.pubdate){return true;}
            else return false;
        };
        return Likes.buscar(dato,existenciaL);
    }

    Publicacion* buscarI(Publicacion dato){
        auto existenciaI=[](Publicacion a, Publicacion b){
            if(a.id==b.id){return true;}
            else return false;
        };
        return ID.buscar(dato,existenciaI);
    }

    void printU(function<void(Publicacion)>_print,int cant){
        Usuarios.EnOrden(_print,cant);
    }
    void printL(function<void(Publicacion)>_print,int cant){
        Likes.EnOrden(_print,cant);
    }
    void printI(function<void(Publicacion)>_print,int cant){
        ID.EnOrden(_print,cant);
    }

    size_t getCant(){
        return cantidad;
    }

    void cargar(){
        string task,id,idU, twet,name,date,pubdate;
            ifstream lectura("publications.tsv");
            while (getline(lectura, task, '\t')) {
                      getline(lectura, id, '\t');
                      getline(lectura, idU, '\t');
                      getline(lectura, twet, '\t');
                      getline(lectura, name, '\t');
                      getline(lectura, date, '\t');
                      getline(lectura, pubdate);
                      Publicacion p ( stoi(id), stoi(idU), twet, name, date,stoi(pubdate));
                      push(p);
                      //++cantidad;


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
