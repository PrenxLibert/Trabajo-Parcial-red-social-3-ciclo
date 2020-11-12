#include "Cuenta.h"

void pruebaChat() {
	Cuenta c1("kevin", 20, "kevin23", "*******");
	Cuenta c2("Brandon", 18, "Brandon15", "*******");

	c1.agregarAmigos(c2);

	c1.sendChat(c2, "hola que haces");

	c2.sendChat(c1, "estoy comiendo");

	c2.sendChat(c1, "y tu?");

	c1.sendChat(c2, "jugando play");

	c2.sendChat(c1, "al rato un pvp?");

	c1.sendChat(c2, "dale");

	cout << "en la cuenta de Brandon" << endl << endl << endl;

	c2.ReadChat();
}

void PruebaPublicaciones() {
	vector<Publicacion> publicaciones;

	Cuenta c1("kevin", 20, "kevin23", "*******");
	Cuenta c2("Brandon", 18, "Brandon15", "*******");

	c1.publicar(publicaciones, "esta es una publicacion");
	c2.publicar(publicaciones, "esta es otra publicacion");
	for (int i = 0; i < publicaciones.size(); i++) {
		publicaciones[i].publicar();
	}
}

void BusquedaContactosAgregados() {
	Cuenta c1("kevin", 20, "kevin23", "*******");
	Cuenta c2("Brandon", 18, "Brandon15", "*******");
	Cuenta c3("Maria", 21, "mariaA", "*******");
	Cuenta c4("Maria", 15, "mariaB", "*******");

	c1.agregarAmigos(c2);
	c1.agregarAmigos(c3);
	c1.agregarAmigos(c4);
	c1.getFriends(c3.nombre);
}

void main() {

	//descomente para probar cada funcion
	//descomente uno por uno

	//pruebaChat();
	//PruebaPublicaciones();
	//BusquedaContactosAgregados();

	system("pause");
}