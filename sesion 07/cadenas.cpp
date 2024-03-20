#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración e inicialización de cadenas
    string cadena1 = "Hola";
    string cadena2(" mundo");
    
    // Asignación de una cadena a otra
    string cadena3 = cadena1 + cadena2;
    
    cout << "Cadena concatenada: " << cadena3 << endl;
    
    return 0;
}
