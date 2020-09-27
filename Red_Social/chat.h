#ifndef CHAT_H
#define CHAT_H
#include <QString>
#include <QFile>
#include <fstream>
#include <string>
#include "interfast.h"
#include <QApplication>
using namespace std;
class chat {
private:
    string usuario;
    string receptor;
    string mensaje = " ";


public:
    chat(string usu="", string recep=""):usuario(usu),receptor(recep){}
    ~chat(){};
    string printChatOnBox(string amigo)
    {

     //string todosMsjs;
      receptor = amigo;
      string emisor, receptor, msj;
      ifstream lectura("mensajes.txt");
      while (getline(lectura, emisor, ',')) {
                getline(lectura, receptor, ',');
                getline(lectura, msj);
          if(usuario == emisor || amigo == emisor || usuario == receptor || amigo == receptor)
          {

          }
      }
      lectura.close();
    }
    
    void enviarmensa(string nom, string ami, string mensa)
    {
     //cout << usuario << ": "<<mensa;
      ofstream escritura("mensajes.txt", ios::app);
      escritura << nom << "," << ami << "," << mensa << "\n" ;
      escritura.close();
    }
    
};
#endif // CHAT_H
