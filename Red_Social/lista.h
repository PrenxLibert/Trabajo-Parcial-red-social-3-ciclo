#ifndef LISTA_H
#define LISTA_H
#include "usuario.h"

template <typename t>

struct Nodo{
  t dato;
  Nodo* anterior;
  Nodo* siguiente;
  Nodo(t d){
      dato=d;
  }
};
template <typename t>
class Lista{
private:
   Nodo<t>* inicio;
   Nodo<t>* fin;
   int contador;
public:
   Lista(){
       inicio=fin=nullptr;
       contador=0;
   }

   void push(t v){
       Nodo<t>* aux;
       if(contador==0){
           inicio=new Nodo<t>(v);
           fin=inicio;
           inicio->anterior=nullptr;
           inicio->siguiente=nullptr;
       }else{
           aux=new Nodo<t>(v);
            fin->siguiente=aux;
            aux->anterior=fin;
            fin=aux;
       }
      contador++;
   }

   void pop(int p){
       if(p<=contador && p>0){
           Nodo<t>* aux;
           aux=inicio;
           for(int i=1;i<p;i++){
              aux=aux->siguiente;
           }
           if(p==1){
               inicio=inicio->siguiente;
               inicio->anterior=nullptr;
               delete aux;
           }else{
               aux->anterior->siguiente=aux->siguiente;
               aux->siguiente->anterior=aux->anterior;
               delete aux;
           }
           contador--;
       }
   }

   Nodo<t>* obtener(int p){
       if(p>0 && p<=contador){
           Nodo<t>*aux;
           aux=inicio;
           for(int i=1;i<p;i++){
              aux=aux->siguiente;
           }
           return aux;
       }else{return;}

   }
};

#endif // CUSUARIO_H
