#include <QApplication>
#include "dec.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dec w;
    w.show();
    
    return a.exec();
}
