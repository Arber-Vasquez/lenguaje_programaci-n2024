#include <iostream>
using namespace std;
int main() {
    int numero;
    char respuesta;
    do {
        cout << "Ingresa un número: ";
        cin >> numero;
        cout << "El número ingresado es: " << numero << endl;
        cout << "¿Deseas ingresar otro número? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    cout << "Fin del programa." << endl;

    return 0;
}
