#ifndef USER_H
#define USER_H

#include"HashTable.h"

struct User{
    string name;
    string lastname;
    string password;
    short old;
    string userName;
    HashTable<User>contactos;
    vector<string>chats;


    User(string n,string l,string p,short o,string u):name(n),lastname(l),password(p),old(o),userName(u){

        auto edad = [](User m, User n) {return m.userName > n.userName; };
        auto print = [](User c) {};
        contactos = HashTable<User>(edad,print);

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
