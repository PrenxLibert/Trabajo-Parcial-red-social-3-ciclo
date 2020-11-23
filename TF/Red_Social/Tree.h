#ifndef TREE_H
#define TREE_H

#include "Library.h"

template<typename T>

struct Nodo{
    T val;
    Nodo* R;
    Nodo* L;
    size_t h;

    Nodo(T v):val(v){
        R=L=nullptr;
    }
};

template <typename T>

class Tree{
private:
    Nodo<T>* start;
    function<bool(T,T)>criterio;


    void actualizaAltura(Nodo<T>* nodo) {
            nodo->h = altura(nodo);
        }

        int altura(Nodo<T>* nodo) {
            if (nodo != nullptr)
                return 1 + max(altura(nodo->L), altura(nodo->R));
        }

        int contar(Nodo<T>* nodo) {
            if (nodo == nullptr)
                return 1 + contar(nodo->L) + contar(nodo->D);
        }
        void rotarDerecha(Nodo<T>*& nodo){
            Nodo<T>* tmp;
            tmp = nodo->L;
            nodo->L = tmp->R;
            actualizaAltura(nodo);
            tmp->R = nodo;
            //actualizo la referencia del padre
            nodo = tmp;
            actualizaAltura(nodo);
        }

        void rotarIzquierda(Nodo<T>*& nodo) {
            Nodo<T>* tmp;
            tmp = nodo->R;
            nodo->R = tmp->L;
            actualizaAltura(nodo);
            tmp->L = nodo;
            //actualizo la referencia del padre
            nodo = tmp;
            actualizaAltura(nodo);
        }
        void balancear(Nodo<T>*& nodo) {
            int diff = altura(nodo->R) - altura(nodo->L);
            if (diff > 1) {//pesado a la derecha
                if (altura(nodo->R->R) < altura(nodo->R->L))
                    rotarDerecha(nodo->R);
                rotarIzquierda(nodo);
            }
            else if (diff < -1) {
                if (altura(nodo->L->R) > altura(nodo->L->L))
                    rotarIzquierda(nodo->L);
                rotarDerecha(nodo);
            }
        }

    void _push(T e, Nodo<T>*& aux){
        if(aux==nullptr){
            aux=new Nodo<T>(e);
        }else if(criterio(aux->val,e)){
            _push(e,aux->L);
        }else{
            _push(e,aux->R);
        }
        balancear(aux);
        actualizaAltura(aux);
    }

    void _EnOrden(Nodo<T>*& aux,function<void(T)>print,int cant,int *i){
        if (aux == nullptr)return;
        else {

             if(*i<cant)_EnOrden(aux->L,print,cant,&*i);

             if(*i<cant)print(aux->val);
             *i=*i+1;
             if(*i<cant)_EnOrden(aux->R,print,cant,&*i);
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
            _EnOrden(start,print,cant,&i);
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
