#ifndef TREE_H
#define TREE_H

#include "Library.h"

template<typename T>

struct Nodo{
    T val;
    Nodo* R;
    Nodo* L;

    Nodo(T v):val(v){
        R=L=nullptr;
    }
};

template <typename T>

class Tree{
private:
    Nodo<T>* start;
    function<bool(T,T)>criterio;

    void _push(T e, Nodo<T>*& aux){
        if(aux==nullptr){
            aux=new Nodo<T>(e);
        }else if(criterio(aux->val,e)){
            _push(e,aux->L);
        }else{
            _push(e,aux->R);
        }
    }

    void _EnOrden(Nodo<T>*& aux,function<void(T)>print,int cant,int i){
        if (aux == nullptr)return;
        else {
            //if(++i<5){
             _EnOrden(aux->L,print,cant,i);

             print(aux->val);
             _EnOrden(aux->R,print,cant,i);
           // }
        }
    }

    void _PreOrden(Nodo<T>* aux) {
        if (aux == nullptr)return;
        else {
            //print(aux->val);
            _PreOrden(aux->L);
            _PreOrden(aux->R);
        }
    }

    void _PostOrden(Nodo<T>* aux) {
        if (aux == nullptr)return;
        else {
            _PostOrden(aux->L);
            _PostOrden(aux->R);
            //print(aux->val);
        }
    }
    T* _buscar(T e,Nodo<T>*aux,function<bool(T,T)>existencia) {
        if (aux == nullptr) return nullptr;
        else if (existencia(aux->val,e)) {
            return &aux->val;
        }
        else if (criterio(aux->val, e)) {
            return _buscar(e, aux->L,existencia);
        }
        else {
            return _buscar(e, aux->R,existencia);
        }
    }

public:
    Tree(function <bool(T,T)> _criterio) {
            criterio = _criterio;
            start = nullptr;
    }
    Tree(){}

        void push(T h) {
            _push(h, start);
        }

        void EnOrden(function<void(T)>print,int cant) {
            int i=0;
            _EnOrden(start,print,cant,i);
        }

        void PreOrden() {
            _PreOrden(start);
        }

        void PostOrden() {
            _PostOrden(start);
        }
        T* buscar(T e,function<bool(T,T)>existencia) {
            return _buscar(e,start,existencia);
        }
};

#endif // TREE_H
