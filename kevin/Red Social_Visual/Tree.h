#pragma once
#include"Bibliotecas.h"

template <typename T>

struct Nodo {
	T valor;
	Nodo* R;
	Nodo* L;

	Nodo(T v) :valor(v) {
		R = L = nullptr;
	}
};

template <typename T>

class Tree {
private:
	Nodo<T>* raiz;
	function <bool(T, T)> criterio;
	function <void(T)> print;

	void _push(T h,Nodo<T>*& aux) {
		if (aux == nullptr) {
			aux = new Nodo<T>(h);
		}
		else if (criterio(aux->valor,h)) {
			_push(h, aux->L);
		}
		else {
			_push(h, aux->R);
		}
	}

	void _EnOrden(Nodo<T>*& aux) {
		if (aux == nullptr)return;
		else {
			_EnOrden(aux->L);
			print(aux->valor);
			_EnOrden(aux->R);
		}
	}

	void _PreOrden(Nodo<T>* aux) {
		if (aux == nullptr)return;
		else {
			print(aux->valor);
			_PreOrden(aux->L);
			_PreOrden(aux->R);
		}
	}
	void _PostOrden(Nodo<T>* aux) {
		if (aux == nullptr)return;
		else {
			_PostOrden(aux->L);
			_PostOrden(aux->R);
			print(aux->valor);
		}
	}
////////////////////////////////

	bool buscar(Nodo<T>*aux,T h) {
		if (aux == nullptr) return false;
		else if (aux->valor == h) {
			return true;
		}
		else if (criterio(aux->valor, h)) {
			return buscar(h, aux->L);
		}
		else {
			return buscar(h, aux->R);
		}
	}

public:
	Tree(function <bool(T,T)> _criterio, function <void(T)> _print) {
		criterio = _criterio;
		print = _print;
		raiz = nullptr;
	}

	void push(T h) {
		_push(h, raiz);
	}

	void EnOrden() {
		_EnOrden(raiz);
	}

	void PreOrden() {
		_PreOrden(raiz);
	}

	void PostOrden() {
		_PostOrden(raiz);
	}
///////////////////////////
	bool existe(T h) {
		return buscar(raiz,h);
	}
};