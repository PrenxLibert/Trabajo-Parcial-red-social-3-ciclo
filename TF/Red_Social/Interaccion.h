#ifndef INTERACCION_H
#define INTERACCION_H
#include"Library.h"
struct Interaccion{
    int idU;
    int idPub;
    string date;
    string share;

    Interaccion(int _idU,int _idPub,string _date,string _share):idU(_idU),idPub(_idPub),date(_date),share(_share){

    }
};
#endif // INTERACCION_H
