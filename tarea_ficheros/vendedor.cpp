#include <iostream>
#include <string>
#include "persona.cpp"
#include "producto.cpp"
#include "ventas.cpp"
using namespace std;

class Vendedor : public Producto
{
private:
    string id_vendedor;
    int venta;

public:
    Vendedor(string _id)
    {
        id_vendedor = _id;
    }
    string GetId_vendedor() const
    {
        return id_vendedor;
    }

    void SetId_vendedor(string id_vendedor)
    {
        id_vendedor = id_vendedor;
    }
    bool Vendedor::RealizarVenta(const string &id_producto, int cantidad)
    {
        // Buscar el producto con el ID proporcionado
        Producto *producto = BuscarProducto(id_producto);
        if (producto == nullptr)
        {
            // El producto no existe
            return false;
        }

        // Verificar si hay suficiente stock 
        if (producto->GetStock() < cantidad)
        {
            // No hay suficiente stock
            return false;
        }

        // Realizar la venta y restar la cantidad del stock
        producto->SetStock(producto->GetStock() - cantidad);
        venta += cantidad;

        // La venta se ha realizado
        return true;
    }
};