#include <iostream>
#include <cstdlib>

using namespace std;

// Sobrecarga del operador + para sumar dos enteros
int operator+(int a, int b) {
    return a + b;
}

// Sobrecarga del operador + para concatenar dos cadenas de texto
string operator+(string a, string b) {
    return a + b;
}

// Sobrecarga de la función sumar() para sumar dos enteros
int sumar(int a, int b) {
    return a + b;
}

// Sobrecarga de la función sumar() para sumar dos flotantes
float sumar(float a, float b) {
    return a + b;
}

int main() {
    // Utilizar la sobrecarga del operador + para sumar dos enteros
    int suma1 = 5 + 3;
    cout << "La suma de 5 + 3 es: " << suma1 << endl;

    // Utilizar la sobrecarga de la función sumar() para sumar dos flotantes
    float suma2 = sumar(2.5f, 3.2f);
    cout << "La suma de 2.5 + 3.2 es: " << suma2 << endl;

    // Utilizar la sobrecarga del operador + para concatenar dos cadenas de texto
    string texto = "Hola " + "mundo!";
    cout << texto << endl;

    return 0;
}