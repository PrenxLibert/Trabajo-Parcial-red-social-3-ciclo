#ifndef INTERFAST_H
#define INTERFAST_H

#include <QWidget>

namespace Ui {
class interfast;
}

class interfast : public QWidget
{
    Q_OBJECT

public:
    explicit interfast(QWidget *parent = nullptr);
    ~interfast();

private:
    Ui::interfast *ui;
};

#endif // INTERFAST_H
