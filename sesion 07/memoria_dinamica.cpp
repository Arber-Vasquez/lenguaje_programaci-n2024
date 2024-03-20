#include <iostream>
using namespace std;

int main() {
    // Asignación de memoria dinámica para un entero
    int* ptr = new int;

    // Verificación de si la asignación fue exitosa

    if (ptr != nullptr) {
        // Asignación exitosa, podemos usar el espacio de memoria asignado
        *ptr = 42;
        cout << "Valor asignado dinámicamente: " << *ptr << endl;
        // Liberación de la memoria asignada
        delete ptr;
        cout << "Memoria liberada correctamente." << endl;
    } else {

        // La asignación falló, no hay suficiente memoria disponible
        cerr << "Error: No se pudo asignar memoria dinámicamente." << endl;
    }
    return 0;
}
