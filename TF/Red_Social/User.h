#ifndef USER_H
#define USER_H

#include"HashTable.h"
#include"Message.h"

struct User{
    string name;
    int id;
    string mail;
    string date;
    HashTable<User>contactos;
    vector<Mensaje>chats;

    User(string n,long _id,string m,string d):name(n),id(_id),mail(m),date(d){

        auto edad = [](User m, User n) {return m.name > n.name; };
        contactos = HashTable<User>(edad);

    }
    User(){}

    void addFriends(User u){
        contactos[u.name].push(u);
    }

};

#endif // USER_H
