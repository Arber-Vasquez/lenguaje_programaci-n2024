#include <iostream>
#include <string>
#include "Producto.cpp"
using namespace std;

class Ventas
{
private:
    string id_ventas;
    int id_productos;
    string fecha;

public:
    // Constructores
    Vendedor(string id_ventas, string fecha)
    {
        id_ventas = id_ventas;
        fecha = fecha;
    }
    string GetId_ventas() const
    {
        return id_ventas;
    }

    void SetId_ventas(string id_ventas)
    {
        id_ventas = id_ventas;
    }
    int GetId_productos() const
    {
        return id_productos;
    }

    void SetId_productos(int id_productos)
    {
        id_productos = id_productos;
    }
    int GetId_productos() const
    {
        return id_productos;
    }

    void SetId_productos(int id_productos)
    {
        id_productos = id_productos;
    }

    string GetFecha() const
    {
        return fecha;
    }

    void SetFecha(string fecha)
    {
        fecha = fecha;
    }
};