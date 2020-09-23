#ifndef RED_SOCIAL_H
#define RED_SOCIAL_H

#include <QWidget>

namespace Ui {
class Red_social;
}

class Red_social : public QWidget
{
    Q_OBJECT

public:
    explicit Red_social(QWidget *parent = nullptr);
    ~Red_social();

private:
    Ui::Red_social *ui;
};

#endif // RED_SOCIAL_H
