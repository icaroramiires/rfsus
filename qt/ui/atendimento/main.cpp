#include "ficha.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ficha identificacao;
    identificacao.show();

    return a.exec();
}
