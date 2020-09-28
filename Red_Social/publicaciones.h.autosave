#ifndef PUBLICACIONES_H
#define PUBLICACIONES_H
#include <QString>
#include <QFile>
#include <fstream>
#include <string>
#include "interfast.h"
#include <QApplication>
using namespace std;
class publicaciones {
private:
    string usuario;
    string mensaje = " ";


public:
    publicaciones(string usu=""):usuario(usu){}
    ~publicaciones(){};
    void imprimir_publi()
    {

     //string todosMsjs;
      string emisor, msj;
      ifstream lectura("publicacion.txt");
      while (getline(lectura, emisor, ',')) {
                getline(lectura, msj);
          
      }
      lectura.close();
    }

    void enviarmensa(string mensa)
    {
     //cout << usuario << ": "<<mensa;
      ofstream escritura("mensajes.txt", ios::app);
      escritura << usuario <<"," << mensa << "\n" ;
      escritura.close();
    }

};
#endif // PUBLICACIONES_H
