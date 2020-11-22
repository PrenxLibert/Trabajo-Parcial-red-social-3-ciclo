#ifndef INTERACCION_H
#define INTERACCION_H
#include"Library.h"
struct Iteraccion{
    int id;
    int idU;
    int idPub;
    string date;
    string share;

    Iteraccion(int _id,int _idU,int _idPub,string _date,string _share):id(_id),idU(_idU),idPub(_idPub),date(_date),share(_share){

    }
};
#endif // INTERACCION_H
