#include <iostream>

using namespace std;

class Coche {
    private:
        string marca;
        int velocidad;

    public:
        // Constructor
        Coche(string marca, int velocidad) {
            this->marca = marca;
            this->velocidad = velocidad;
        }

        // Método para acelerar el coche
        void acelerar() {
            velocidad += 10;
        }

        // Método para imprimir la información del coche
        void imprimir() {
            cout << "Marca: " << marca << endl;
            cout << "Velocidad: " << velocidad << " km/h" << endl;
        }
};

int main() {
    // Crear un objeto de la clase Coche
    Coche coche1("Toyota", 100);

    // Acelerar el coche
    coche1.acelerar();

    // Imprimir la información del coche
    coche1.imprimir();

    return 0;
}