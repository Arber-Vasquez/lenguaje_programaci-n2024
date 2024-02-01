#include <iostream>
using namespace std;
int main() {
    // declaramos la cantidad de multiplos y los multiplos como valores enteros
    int cantidad = 20;
    int multiplos[cantidad];

    //la cantidad de multiplos encontrados se almacenaran en la variable numeros
    int numeros = 0;
    //usamos un bucle for para calcular los multiplos
    //si numeros no supera el valor de cantidad continuara buscando los multiplos
    for (int i = 1; numeros < cantidad; ++i) {
        if (i % 9 == 0) {
            multiplos[numeros] = i;
            numeros++;
        }
    }
    // imprimimos el mensaje de los multiplos encontrados
    cout << "Los primeros 20 multiplos de 9 son: ";
    for (int i = 0; i < cantidad; ++i) {
        cout << multiplos[i] << "\t";
    }

    return 0;
}