#ifndef COMMENTS_H
#define COMMENTS_H

#include "Comment.h"
#include "HashTable.h"

class Comments{
private:
    Tree<Comment>coleccion;
    size_t cantidad;
    function<bool(Comment, Comment)> busqueda;
public:
    Comments(function<bool(Comment, Comment)> criterio,function<bool(Comment, Comment)> _busqueda){
        coleccion=Tree<Comment>(criterio);
        cantidad=0;
        busqueda=_busqueda;
    }
    Comments(){}

    void push(Comment dato){
        dato.id=cantidad+1;
        dato.idPub=cantidad+1;
        coleccion.push(dato);
        cantidad++;
    }

    Comment* buscar(Comment dato){
        return coleccion.buscar(dato,busqueda);
    }

    void print(function<void(Comment)>_print,int cant){
        coleccion.EnOrden(_print,cant);
    }

    void cargar(){
        string ID,idPub,date,text;
        QString id,idpub;
            ifstream lectura("comment.tsv");
            while (getline(lectura, ID, '\t')) {
                      getline(lectura, idPub, '\t');
                      getline(lectura, date, '\t');
                      getline(lectura, text);

                      id=QString::fromStdString(ID);
                      idpub=QString::fromStdString(idPub);

                      Comment p (id.toInt(),idpub.toInt(),date,text);
                      push(p);
            }
            lectura.close();
    }
    //
    void saved(Comment u){
        ++cantidad;
        ofstream escritura("comment.tsv",ios::app);
        escritura<<cantidad<< '\t'<<u.idPub<<'\t' <<u.date<< '\t'<< u.text<<'\n';
        escritura.close();
    }
};



#endif // COMMENTS_H
