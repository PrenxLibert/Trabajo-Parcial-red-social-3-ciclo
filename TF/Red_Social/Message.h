#ifndef MESSAGE_H
#define MESSAGE_H

#include "Library.h"

struct Mensaje{
    int IdU;
    int IdF;
    string msj;

    Mensaje(int u,int f,string sms):IdU(u),IdF(f),msj(sms){}
};



#endif // MESSAGE_H
