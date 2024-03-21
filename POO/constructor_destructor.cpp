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
            cout << "Constructor llamado" << endl;
        }

        // Destructor
        ~Coche() {
            cout << "Destructor llamado" << endl;
        }

        // Método para imprimir la información del coche
        void imprimir() {
            cout << "Marca: " << marca << endl;
            cout << "Velocidad: " << velocidad << " km/h" << endl;
        }
};