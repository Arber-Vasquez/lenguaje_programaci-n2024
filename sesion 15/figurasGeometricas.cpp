#include<iostream>
using namespace std;

class FormaGeometrica{
    public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Rectangulo: public FormaGeometrica{
    private:
        double base;
        double altura;
    public:
        Rectangulo();
        Rectangulo(double l, double a){
            base = l;
            altura = a;
        }

        void dibujar() const override{
            cout<<"dibujando un rectangulo"<<endl;
        }
        double calcular_area() const override{
            return base * altura;
        }
};

class Triangulo: public FormaGeometrica {
    private:
        double base;
        double altura;
        double lado_1;
        double lado_2;
    public:
        Triangulo(double b, double h) {
            base = b;
            altura = h;
        }

        void dibujar() const override {
            cout<<"Dibujando un triángulo"<<endl;
        }

        double calcular_area() const override {
            return 0.5 * base * altura;
        }
};

class Circulo: public FormaGeometrica {
    private:
        double radio;
    public:
        Circulo(double r) {
            radio = r;
        }

        void dibujar() const override {
            cout<<"Dibujando un círculo"<<endl;
        }

        double calcular_area() const override {
            return 3.14 * radio * radio;
        }
};

class Cuadrado: public FormaGeometrica {
    private:
        double lado;
    public:
        Cuadrado(double l) {
            lado = l;
        }

        void dibujar() const override {
            cout<<"Dibujando un cuadrado"<<endl;
        }

        double calcular_area() const override {
            return lado * lado;
        }
};

class Trapecio: public FormaGeometrica {
    private:
        double base_mayor;
        double base_menor;
        double altura;
    public:
        Trapecio(double bm, double bM, double a) {
            base_menor = bm;
            base_mayor = bM;
            altura = a;
        }

        void dibujar() const override {
            cout<<"Dibujando un trapecio"<<endl;
        }

        double calcular_area() const override {
            return 0.5 * altura * (base_mayor + base_menor);
        }
};

int main() {
    FormaGeometrica* formas[5];

    formas[0] = new Rectangulo(5, 10);
    formas[1] = new Circulo(3);
    formas[2] = new Triangulo(4, 5);
    formas[3] = new Rombo(5, 7);
    formas[4] = new Trapecio(3, 6, 10);

    for (int i = 0; i < 5; i++) {
        formas[i]->dibujar();
        cout << "El área es: " << formas[i]->calcular_area() << endl;
    }

    for (int i = 0; i < 5; i++) {
        delete formas[i];
    }

    return 0;
}