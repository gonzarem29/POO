#include <iostream>
#include <ctime>



template <class T>
void ordenarDESC(T* v, int Cantidad){
    for (int i = 1; i < Cantidad; ++i) {
          T key = v[i];
          int j = i - 1;

          // Mover los elementos mayores que key hacia adelante
          while (j >= 0 && v[j] < key) {
              v[j + 1] = v[j];
              j--;
          }
          v[j + 1] = key;
     }
}

template <class T>
    void ordenarASC(T* v, int Cantidad){
    for (int i = 1; i < Cantidad; ++i) {
        T key = v[i];
        int j = i - 1;

        // Mover los elementos mayores que key hacia adelante
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

template <class T>
void imprimir(T* v, int Cantidad, bool M_a_m){
    if(M_a_m){
        ordenarDESC(v,Cantidad);
        std::cout<<"Arreglo Descendente: ";
        for(int i=0;i<Cantidad;i++){
            std::cout << v[i] << " ";
        }
    }
    else{
        ordenarASC(v,Cantidad);
        std::cout<<"Arreglo Ascendente: ";
        for(int i=0;i<Cantidad;i++){
            std::cout << v[i] << " ";
        }
    }
    std::cout << std::endl;
}


int main(){

    srand(time(NULL));
    int intArray[10];
    float floatArray[10];

    for(int i = 0; i < 10; i++){
        intArray[i] = rand()%100 + 1;
        floatArray[i] = (rand()%100 + 1) + (1.0f/(rand()%100 +1));
    }

    imprimir(intArray, 10, true);
    imprimir(floatArray, 10, false);

    return 0;
}
