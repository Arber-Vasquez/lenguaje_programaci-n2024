#include <iostream>
#include <string>
using namespace std;
struct Alumno
{
    string nombre;
    string apellido;
    int edad;
    float nota;
};
int main()
{
    Alumno alumno1;
    alumno1.nombre="Juan";
    alumno1.apellido="Lopez";
    alumno1.edad=12;
    alumno1.nota=12.4;

    cout<<"Datos del alumno"<<endl;
    cout<<"Nombre "<<alumno1.nombre<<endl;
    cout<<"Apellido "<<alumno1.apellido<<endl;
    cout<<"Edad "<<alumno1.edad<<endl;
    cout<<"Nota "<<alumno1.nota<<endl;

    return 0;
}