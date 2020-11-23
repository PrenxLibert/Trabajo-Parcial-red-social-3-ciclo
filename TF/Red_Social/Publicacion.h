#ifndef PUBLICACION_H
#define PUBLICACION_H
#include"Library.h"

struct Publicacion{
    int id;
    int idU;
    string twet;
    string name;
    string date;
    int pubdate;

    Publicacion(int _id,int _idU,string _twet,string _name,string _date,int _pubdate):id(_id),idU(_idU),twet(_twet),name(_name),date(_date),pubdate(_pubdate){

    }
    Publicacion(){}
};


#endif // PUBLICACION_H
