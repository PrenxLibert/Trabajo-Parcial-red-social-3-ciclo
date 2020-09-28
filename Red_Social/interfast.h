#ifndef INTERFAST_H
#define INTERFAST_H

#include <QDialog>
#include <chat.h>
#include <lista.h>
namespace Ui {
class interfast;
}

class interfast : public QDialog
{
    Q_OBJECT
    chat* c1;
    User* us_log;
public:
    explicit interfast(User* _us_log = new User(), QWidget *parent = nullptr);
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

private:
    Ui::interfast *ui;

};

#endif // INTERFAST_H
