#include <iostream>
#include <cstdlib>

using namespace std;

class Motor {
public:
    void encender() {
        cout << "El motor se ha encendido." << endl;
    }

    void apagar() {
        cout << "El motor se ha apagado." << endl;
    }
};

class Coche {
private:
    Motor miMotor; // Composición: Coche tiene una instancia de Motor como miembro

public:
    void arrancar() {
        miMotor.encender();
    }

    void parar() {
        miMotor.apagar();
    }
};

int main() {
    // Utilizar la relación de composición entre Coche y Motor
    Coche miCoche;
    miCoche.arrancar();
    miCoche.parar();

    return 0;
}