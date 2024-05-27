#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string>* Ordenar(vector<string>* POINTER) {
    sort(POINTER->begin(), POINTER->end());
    return POINTER;
}

void Accion() {
    vector<string>* puntero = new vector<string>;
    for(int X = 0; X < 5; X++) {
        string STORAGE;
        cout << "Ingrese la Palabra " << (X + 1) << endl;
        std::cin >> STORAGE;
        puntero->push_back(STORAGE);
    }

    cout << "Las palabras ingresadas por usted han sido: " << endl;
    for(int X = 0; X < 5; X++) {
        cout << puntero->at(X) << endl;
    }

    Ordenar(puntero);

    cout << "Las palabras ingresadas por usted en Orden son: " << endl;
    for(int X = 0; X < 5; X++) {
        cout << puntero->at(X) << endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Accion();
    return a.exec();
}
