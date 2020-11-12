#pragma once
#include "Cuenta.h"

class Red {
private:
	HashTable<Cuenta> cuentas;
	vector<Publicacion> publicaciones;
public:
	Red(){
		auto edad = [](Cuenta m, Cuenta n) {return m.edad > n.edad; };
		auto print = [](Cuenta p) {p.to_String(); };
		cuentas = HashTable<Cuenta>(edad, print);
	}

	void Register() {
		string nombre;
		short edad;
		string username;
		string contrasena;

		cout << "ingrese su nombre";
		cin >> nombre;
		cout << "ingrese su edad";
		cin >> edad;
		cout << "ingrese su username";
		cin >> username;
		cout << "ingrese su contrasena";
		cin >> contrasena;

		Cuenta aux(nombre, edad, username, contrasena);
		cuentas[nombre].push(aux);
	}

	void LogIn() {
		
	}
};