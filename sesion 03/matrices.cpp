#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Crear una matriz de 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Imprimir la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular la suma de los elementos de la matriz
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
    }

    // Imprimir la suma de los elementos de la matriz
    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}