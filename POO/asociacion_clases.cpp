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
    Motor miMotor; // Asociación: Coche utiliza una instancia de Motor como miembro

public:
    void arrancar() {
        miMotor.encender();
    }

    void parar() {
        miMotor.apagar();
    }
};

int main() {
    // Utilizar la relación de asociación entre Coche y Motor
    Coche miCoche;
    miCoche.arrancar();
    miCoche.parar();

    return 0;
}