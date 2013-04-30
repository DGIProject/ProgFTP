#include "proftp.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    proftp w;
    w.show();
    
    return a.exec();
}
