#ifndef USER_H
#define USER_H

#include"HashTable.h"

struct User{
    string name;
    int id;
    string mail;
    string date;
    HashTable<User>contactos;
    vector<string>chats;
    vector<string>publicaiones;


    User(string n,long _id,string m,string d):name(n),id(_id),mail(m),date(d){

        auto edad = [](User m, User n) {return m.name > n.name; };
        contactos = HashTable<User>(edad);

    }
    User(){}

    void addFriends(User u){
        contactos[u.name].push(u);
    }

    void ReadChat() {
        for (unsigned int i = 0; i < chats.size(); ++i) {
            cout << chats[i]<<endl;
        }
    }

    void sendChat(User& c,string sms) {
        sms = name + ":" + sms;
        chats.push_back(sms);
        c.chats.push_back(sms);
    }

    void getFriends(string nombre) {
        contactos[nombre].EnOrden();
    }
};

#endif // USER_H
