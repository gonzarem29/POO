#include <QCoreApplication>
#include <iostream>
#include "Bibliotek.h"
using namespace std;

void Ejecucion() {
    cout << "Version de QT: ";
    EKFunctions::GET_LATEST_QT_VERSION();
    cout << "Version de la Libreria: ";
    EKFunctions::GET_LIBRARY_VERSION();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Ejecucion();
    return a.exec();
}
