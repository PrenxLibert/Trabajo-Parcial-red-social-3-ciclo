#pragma once
#include "Bibliotecas.h"

struct Publicacion {
	string publicacion;
	int likes;

	Publicacion(string nombre,string mensaje) {
		publicacion =nombre + '\n' + mensaje;
		likes = 0;
	}

	void publicar() {
		cout << publicacion<<endl;
		cout << "likes: " << likes<<endl;
	}
};
