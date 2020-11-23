#ifndef VIZUALIZAR_H
#define VIZUALIZAR_H

#include <QDialog>

namespace Ui {
class Vizualizar;
}

class Vizualizar : public QDialog
{
    Q_OBJECT

public:
    explicit Vizualizar(QWidget *parent = nullptr);
    ~Vizualizar();

private:
    Ui::Vizualizar *ui;
};

#endif // VIZUALIZAR_H
