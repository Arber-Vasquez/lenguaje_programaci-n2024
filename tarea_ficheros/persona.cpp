#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    int id_persona;
    string apellidos;
    string nombres;
    string dni;
    string direccion;
public:
    Persona();

    Persona(int _id, string _apellidos, string _nombre){
        id_persona = _id;
        apellidos = _apellidos;
        nombres = _nombre;
    }

    int GetCodigo_persona() const
    {
        return id_persona;
    }

    void SetCodigo_persona(int codigo_persona)
    {
        id_persona = id_persona;
    }

    string GetApellidos() const
    {
        return apellidos;
    }

    void SetApellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string GetNombres() const
    {
        return nombres;
    }

    void SetNombres(string nombres)
    {
        nombres = nombres;
    }

    string GetDni() const
    {
        return dni;
    }

    void SetDni(string dni)
    {
        dni = dni;
    }

    string GetDireccion() const
    {
        return direccion;
    }

    void SetDireccion(string direccion)
    {
        direccion = direccion;
    }
};