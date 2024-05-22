#include <QCoreApplication>
#include <iostream>
using namespace std;

void Aleatorio() {
    int* POINTER = new int [10];
    cout << "10 cifras aleatorias: " << endl;
    for(int c = 0; c < 10; c++) {
        *(POINTER + c) = rand() % 20 + 2;
        cout << *(POINTER + c) << endl;
    }
    return;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Aleatorio();
    return a.exec();
}
