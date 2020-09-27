#ifndef CHAT_H
#define CHAT_H
#include <QString>
#include <QFile>

#include <iostream>
using namespace std;
class chat {
private:
    QString usuario;
    QString receptor;
    QString mensaje = "";
public:
    chat(QString usu="", QString recep=""):usuario(usu),receptor(recep){}
    ~chat(){};
    void MostrarChat(QString ami){
        receptor = ami;
      QString en,re,men;
      ifstream lectura("mensajes.txt");
      while (getline(lectura, en, ',')) {
                getline(lectura, re, ',');
                getline(lectura, men);
          if(usuario == en || ami == en || usuario == re || ami == re){
            cout << en << ": " << men <<"\n";
          }
      }


        lectura.close();
    }

    void enviarmensa(QString nom,QString ami, QString mensa){
     //cout << usuario << ": "<<mensa;
      ofstream escritura("mensajes.txt", ios::app);
      escritura << nom <<"," << ami << "," << mensa << "\n" ;
      escritura.close();
    }

};
#endif // CHAT_H
