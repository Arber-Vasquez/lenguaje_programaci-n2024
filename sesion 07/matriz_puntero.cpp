#include <iostream>
using namespace std;

int main() {
    int *matriz[3]; // Declaración de una matriz de punteros
    
    int fila1[] = {1, 2, 3}; // Definición de una fila
    int fila2[] = {4, 5, 6};
    int fila3[] = {7, 8, 9};
    
    matriz[0] = fila1; // Asignación de las filas a la matriz de punteros
    matriz[1] = fila2;
    matriz[2] = fila3;
    
    cout << "Elemento en la fila 2, columna 1: " << matriz[1][0] << endl; // Acceso a un elemento
    return 0;
}
