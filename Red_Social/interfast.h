#ifndef INTERFAST_H
#define INTERFAST_H

#include <QDialog>
#include <chat.h>
#include <lista.h>
#include <QVBoxLayout>
#include <QLabel>
#include "lista.h"
#include <vector>
namespace Ui {
class interfast;
}

class interfast : public QDialog
{
    Q_OBJECT
    chat* c1;
    User* us_log;
public:
    explicit interfast(User* _us_log = new User(), List* Listain = new List(), QWidget *parent = nullptr);
    ~interfast();



User* getUserLogged() { return us_log; }

void readFriendship_Data()
{

}

private slots:
    void on_pushButton_clicked();
    
    void on_pshbu_mos_perfil_clicked();

    void on_btnAccept_clicked();

    void on_btnDecline_clicked();

    void on_pushButton_4_clicked();

    void on_psbu_solicitud1_clicked();

    void on_psbu_solicitud2_clicked();

    void on_psbu_solicitud3_clicked();

    void on_pushButton_5_clicked();



private:
    Ui::interfast *ui;
    QVBoxLayout* wig = new QVBoxLayout(this);
    QVBoxLayout* wigvacio = new QVBoxLayout(this);
    List* listainter = new List();
    vector <string> arr;
public:
    void sort_por_alfabeto();


};

#endif // INTERFAST_H
