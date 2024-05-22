#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Libreria.dll"
using namespace std;

void Ejecucion() {
    Hola();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Ejecucion();
    return a.exec();
}
