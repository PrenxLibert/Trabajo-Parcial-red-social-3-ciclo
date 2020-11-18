#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "Tree.h"

template <typename T>

class HashTable {
private:
    vector<Tree<T>*> Table;
    function<bool(T, T)> criterio;

    int size;

public:
    HashTable(function<bool(T, T)> _criterio,int _size=10){
        criterio = _criterio;
        size = _size;

        for (int i = 0; i < size; ++i) {
            Table.push_back(nullptr);
        }
    }
    HashTable(){}
    int funtionhash(string key) {
        long code=0;

        for (int i = 0; key[i] != '\0'; ++i) {
            code += (int)key[i];
        }

        return code % size;
    }

    Tree<T>& operator[](string key) {
        int indice = funtionhash(key);
        if (Table[indice] == nullptr)Table[indice] = new Tree<T>(criterio);
        return *Table[indice];
    }

};
#endif // HASHTABLE_H
