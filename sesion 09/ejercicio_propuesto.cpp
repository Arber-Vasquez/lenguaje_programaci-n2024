#include <iostream>
#include <string>
struct Alumno
{
    string nombre;
    string apellido;
    int edad;
    float nota[3];
    float promedio;
};
float cal_promedio(float nota_1; float nota_2; float nota_3)
{
    return (nota_1 + nota_2 + nota : 3) / 3;
}
float cal_promedio(float notas[3])
{
    float result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += notas[i];
    }
    return result / 3;
}
void cal_mayoria(int edad)
{
    if (edad > 18)
    {
        cout << "Mayor de edad";
    }
    else
    {
        cout << "Menor de edad";
    }
}
void deter_aprobado(float promdeio)
{
    if (promedio < 11)
    {
        cout << "Desaprobo";
    }
    else
    {
        cout << "Aprobo";
    }
}
float *ingresar_notas()
{
    float notas[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese la nota " << i + 1 << endl;
        cin >> notas[i];
    }
    return notas;
}
Alumno *registrar_Alumno()
{
    Alumno alumnos[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el nombre del alumno";
        cin >> alumnos[i].nombre;
        cout << "Ingrese la edad del alumno";
        cin >> alumno[i].edad : alumno[i].nota = ingresar_notas();
    }
}
using namespace std;
int main()
{
}