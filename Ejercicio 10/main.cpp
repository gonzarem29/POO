#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "jugador.h"

using namespace std;

int main(){

    srand(time(NULL));
    vector<Jugador*>* jugadores = new vector<Jugador*>;
    vector<std::string> nombres = {"manu", "gonza", "messi", "juna", "carlos", "edgar", "julian", "mauro", "lombardo", "duki", "khea", "pereira", "bottas", "verstappen"};

    for(int i=0; i< 10; i++){
        jugadores->push_back( new Jugador(rand()%300 +1, rand()%100+1, nombres[rand()%14 +1]) );
    }

    cout << "Los jugadores son:\n";
    for(int i = 0; i <10 ; i++){
        cout << "\n##################################\n";
        cout << "\n # Nombre: "      << jugadores->at(i)->GetNombre();
        cout << "\n # Velocidad: "   << jugadores->at(i)->GetVelocidad();
        cout << "\n # Fuerza: "      << jugadores->at(i)->GetFuerza();
        cout << "\n##################################\n";
    }
    return 0;
}
