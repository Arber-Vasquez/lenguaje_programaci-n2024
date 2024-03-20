#include <iostream>
using namespace std;

int main() {
    try {
        int divisor = 0;
        int resultado = 10 / divisor; // Intenta dividir por cero, lo que generará una excepción
        cout << "Resultado: " << resultado << endl;
    } catch (const exception& e) { // Captura la excepción y muestra un mensaje
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}
