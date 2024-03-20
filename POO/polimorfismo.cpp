#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// definimos la clase abstracta "Forma"
class Forma {
public:
    // asignamos la funcion miembro  virtual pura para que sea polimorfica
    virtual void dibujar() = 0;
};

// definimos  una clase derivada de la clase abstracta "Forma" llamada Circulo, y  sobreescribimos el metodo "dibujar 
class Circulo: public Forma {
public:
    void dibujar() {
        cout << "Dibujando un círculo" << endl;
    }
};
// definimos  otra clase derivada de "Forma", llamada Rectangulo, que tambien es hija de "Forma".
class Cuadrado: public Forma {
public:
    void dibujar() {
        cout << "Dibujando un cuadrado" << endl;
    }
};

int main() {
    // Crear un vector de punteros a Forma
    vector<Forma*> formas;

    // Agregar objetos de los tipos Circulo y Cuadrado al vector
    /* Polimorfismo  en acción. Esto permite agregar cualquier tipo de forma (Circullo o Cuadrado) al vector sin tener que  */
    formas.push_back(new Circulo());
    formas.push_back(new Cuadrado());

    // Iterar sobre el vector y llamar a la función dibujar() de cada objeto
    for (auto forma: formas) {
        forma->dibujar();
        delete forma;
    }

    return 0;
}