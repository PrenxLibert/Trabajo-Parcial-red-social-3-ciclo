#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include "usuario.h"
#include <fstream>
#include <QFile>
#include <QMessageBox>
using namespace std;
typedef unsigned long ul;

struct Nodo //Nodo doblemente enlazado
{
    Nodo* prev;
    Nodo* next;
    User usuario; //"valor"
    public:
    Nodo(User us= User(),Nodo* s = nullptr, Nodo* a = nullptr ): prev(a), next(s), usuario(us){}
};

class List //Lista doblemente enlazada con puntero al final.
{
    Nodo* start;
    Nodo* last;
    short cantidad;

    public:
    List()
    {
        start = last = nullptr;
        cantidad = 0;
    }

    short getCantidad() {return cantidad; }

    void push(User u) //Insertar nuevo
    {
        Nodo* nuevo = new Nodo(u); //Creando instancia o como quieras verlo, NUEVA DIRECCION PARA SER USADA Y ALMANCENADA. SI ELIMINAS, BORRAS LA DIRECCION Y SE VA A LA SHOTA
        if(start == nullptr)
        {
            start=nuevo;
            last=nuevo;
            nuevo->next=nullptr;
        }
        else
        {
          nuevo->next = start;
          start->prev = nuevo;
          start = nuevo;
        }
        ++cantidad;
    }

  void write(User u)
  {

      ofstream file_wchat("reg_users.txt", std::ios::app); //Agregar al final
      file_wchat<<u.nombre<<","<<u.apellido<<","<<u.nickname<<","<<u.numero<<","<<u.psswrd<<"\n";
      file_wchat.close();
  }

  void read()
  {
      ifstream file_rchat("reg_users.txt", std::ios::in);
      if(!file_rchat.fail())
      {
          User temporal_user = User();
          //string numero;
          while(!file_rchat.eof()) //Cuando el archivo no haya llegado a su FINAL.
          {
              getline(file_rchat, temporal_user.nombre, ',');
              getline(file_rchat, temporal_user.apellido, ',');
              getline(file_rchat, temporal_user.nickname,',');
              getline(file_rchat, temporal_user.numero,','); //temporal_user.numero = stoul(numero); //No olvidar el STOI() y STOULL() UNSIGNED LONG LONG
              getline(file_rchat, temporal_user.psswrd); //Iría con \n, pero ya está por default
              push(temporal_user);
          }
          file_rchat.close();
      }
  }

    //Limpiar lista
    void clearList()
    {
        Nodo* temp = start;
        while(temp != nullptr)
        {
            start = temp->next;
            delete temp->prev;
            temp = temp->next;
        }
        cantidad = 0;
    }

    //Eliminar
    void pop(int pos)
    {
        Nodo* temp = start;

        for(short i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Nodo* temp2 = temp->next; //Auxiliar para borrar
        temp->next = temp->next->next;
        temp->next->prev->prev = temp;
        delete temp2;
    }

    void printing(function<void(User)> ave)
    {
        Nodo* aux = start;
        while(aux != nullptr)
        {
            ave(aux->usuario);
            aux = aux->next;
        }
    }

    void ordenamientoAlfa()
    {
      Nodo* aux = start;
      vector <User> usrs;
      //Llenar vector de usuarios
      while(aux != nullptr)
      {
          usrs.push_back(aux->usuario);
          aux = aux->next;
      }
      //Ordenamiento
      User temp;
      short numLetra = 0;
      for(ul i = 0; i < usrs.size() - 1; i++)
      {
          for(ul j = i + 1; j < usrs.size(); j++) //static_cast<int>(f)
          {
              if(static_cast<int>(usrs.at(i).nombre[numLetra]) < static_cast<int>(usrs.at(j).nombre[numLetra]))
              {
                  temp = usrs[j];
                  usrs[j] = usrs[i];
                  usrs[i] = temp;
              }
          }
      }
      clearList();
      for(ul i = 0; i < usrs.size(); i++)
      {
          push(usrs.at(i));
      }
  }

    bool buscar(string nombre, string contrasena){

        Nodo* aux;
        aux = start;
        bool existe = false;
        for(int i = 0; i < cantidad; i++){
            if(aux->usuario.nickname == nombre && aux->usuario.psswrd == contrasena)
            {
                existe = true;
            }
            aux = aux->next;
        }
        return existe;
    }
};



#endif // CUSUARIO_H

