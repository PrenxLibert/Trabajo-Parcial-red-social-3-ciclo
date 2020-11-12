#pragma once
#include "User.h"
#include "HashTable.h"
#include "Publicacion.h"

struct Cuenta
{
	string nombre;
	short edad;
	string username;
	string contrasena;
	//########################
	HashTable<Cuenta> contactos;
	vector<string>chats;
	//###########################
	vector<Publicacion> publicaciones;

	

	Cuenta(string n, short e, string u, string c):nombre(n),edad(e),username(u),contrasena(c){

		auto edad = [](Cuenta m, Cuenta n) {return m.edad > n.edad; };
		auto print = [](Cuenta c) {c.to_String(); };
		contactos = HashTable<Cuenta>(edad,print);
	}
	Cuenta(){}
	~Cuenta(){}

	void agregarAmigos(Cuenta u) {
		contactos[u.nombre].push(u);
	}

	void publicar(vector <Publicacion>& publicaciones , string mensaje) {
		Publicacion p(nombre,mensaje);
		publicaciones.push_back(p);
	}

	void to_String() {
		cout << "nombre " << nombre << " edad " << edad << " user name " << username << " contrasena ****** " << endl;
	}

	void ReadChat() {
		for (int i = 0; i < chats.size(); ++i) {
			cout << chats[i]<<endl;
		}
	}

	void sendChat(Cuenta& c,string sms) {
		sms = nombre + ":" + sms;
		chats.push_back(sms);
		c.chats.push_back(sms);
	}

	void getFriends(string nombre) {
		contactos[nombre].EnOrden();
	}
};