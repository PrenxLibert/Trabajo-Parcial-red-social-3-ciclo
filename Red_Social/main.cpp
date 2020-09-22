#include "baseredsocial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    baseredsocial w;
    w.show();
    return a.exec();
}
