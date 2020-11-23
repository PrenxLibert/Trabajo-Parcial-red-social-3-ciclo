#ifndef COMMENT_H
#define COMMENT_H
#include"Library.h"
struct Comment{
    int id;
    int idPub;
    string date;
    string text;

    Comment(int _id,int _idPub,string _date,string _text):id(_id),idPub(_idPub),date(_date),text(_text){

    }
};
#endif // COMMENT_H
