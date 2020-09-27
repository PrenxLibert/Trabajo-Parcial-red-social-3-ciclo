#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include "usuario.h"
#include <fstream>
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
    short cantidad = 0;

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
        if(start==nullptr)
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
    void guardar() {
            Nodo* aux=start;
            ofstream archivo("archivo.dat", ios::binary);

            for (int i = 0; i < cantidad; i++) {
                archivo.write((char*)&aux->usuario, sizeof(aux->usuario));
                aux = aux->next;
            }
            archivo.close();
        }

    void leer() {
      User m;
      ifstream archivo("archivo.dat", ios::binary);
      if(!(archivo.fail())){
          while (!archivo.eof()) {
              archivo.read((char*)&m, sizeof(m));
              push(m);
          }
          archivo.close();
      }
    }
};

/* Parte que tenemos que poner en el main
int main()
{
    List* userList = new List();

    auto print =[](User u)
    {
          cout<<"Nombre del usuario: "<< u.nombre <<"\n";
          cout<<"Apellido del usuario: "<< u.apellido <<"\n";
          cout<<"Nombre de usuario del usuario: "<< u.usuario <<"\n";
          cout<<"Contraseña del usuario: "<< u.contrasena <<"\n";
    };

    User* u1=new User("Pablo");
    User* u2=new User("Andres");
    User* u3=new User("Walter");

    userList->push(*u1); userList->push(*u2); userList->push(*u3);
    userList->printing(print);
    userList->ordenamientoAlfa();
    cout<<endl;
    userList->printing(print);
    userList->pop(1);
    cout<<endl;
    userList->printing(print);
    return 0;
}*/

#endif // CUSUARIO_H

