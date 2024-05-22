#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

void ValoresR() {
    vector<int>* Puntero = new vector<int>;
    for(int X = 0; X < 30; X++) {
        int Temp = rand() % 15;
        Puntero->push_back(Temp);
    }

    cout << "Sus numeros son:" << endl;
    for(int X = 0; X < 30; X++) {
        cout << Puntero->at(X) << endl;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ValoresR();
    return a.exec();
}
