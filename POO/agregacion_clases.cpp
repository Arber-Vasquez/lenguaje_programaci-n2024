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
    Motor* miMotor; // Agregación: Coche tiene una instancia de Motor como miembro

public:
    Coche(Motor* motor) : miMotor(motor) {}

    void arrancar() {
        miMotor->encender();
    }

    void parar() {
        miMotor->apagar();
    }

    ~Coche() {
        delete miMotor;
    }
};

int main() {
    // Utilizar la relación de agregación entre Coche y Motor
    Motor* miMotor = new Motor();
    Coche* miCoche = new Coche(miMotor);
    miCoche->arrancar();
    miCoche->parar();

    delete miMotor;
    delete miCoche;

    return 0;
}