#ifndef INTERFAST_H
#define INTERFAST_H

#include <QDialog>
#include <chat.h>

namespace Ui {
class interfast;
}

class interfast : public QDialog
{
    Q_OBJECT
    chat* c1;
public:
    explicit interfast(QWidget *parent = nullptr);
    ~interfast();

private slots:
    void on_pushButton_clicked();
    
private:
    Ui::interfast *ui;
};

#endif // INTERFAST_H
