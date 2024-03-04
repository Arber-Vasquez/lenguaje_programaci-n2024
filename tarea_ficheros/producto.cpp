#include <iostream>
#include <string>
using namespace std;

class Producto
{
private:
    int id_producto;
    string detalles;
    string tipo;
    string fecha;
    int precio;
    int productos[100];
    int numProductos;

public:
    Producto();
    Producto(int _id, string _tipo, int _precio, int numProductos = 0)
    {
        id_producto = _id;
        tipo = _tipo;
        precio = _precio;
    }
    int GetId_producto() const
    {
        return id_producto;
    }

    void SetId_producto(int id_producto)
    {
        id_producto = id_producto;
    }

    string GetDetalles() const
    {
        return detalles;
    }

    void SetDetalles(string detalles)
    {
        detalles = detalles;
    }

    string GetTipo() const
    {
        return tipo;
    }

    void SetTipo(string tipo)
    {
        tipo = tipo;
    }
    GetStock() const {return stock;}
    SetStock(int _stock) {stock = _stock;}
    string GetFecha() const
    {
        return fecha;
    }

    void SetFecha(string fecha)
    {
        fecha = fecha;
    }

    int GetPrecio() const
    {
        return precio;
    }

    void SetPrecio(int precio)
    {
        precio = precio;
    }
    string GetTipoProducto() const
    {
        if (tipo == "electronicos")
        {
            return "Productos Electronicos";
        }
        else if (tipo == "Ropa")
        {
            return "Productos de  Ropa";
        }
        else if (tipo == "Libros")
        {
            return "Productos  de Libreria";
        }
        else
        {
            return "Tipo de producto invalido";
        }
    }
    void SetDetallesProducto(int _id, string _tipo, string _fecha, int _precio)
    {
        SetId_producto(_id);
        SetTipo(_tipo);
        SetFecha(_fecha);
        SetPrecio(_precio);
    }
    void AñadirProducto(Producto producto)
    {
        productos[numProductos] = producto;
        numProducts++;
    }
    void DeterminarStock(int cantidad_producto, string TipoProducto)
    {
        int totalStock = 0;
        for (int i = 0; i < numProductos; i++)
        {
            if (productos[i].GetTipo() == TipoProducto)
            {
                totalStock += productos[i].GetStock();
            }
        }
        if (totalStock >= cantidad_producto)
        {
            cout << "El stock disponible del producto '"
                 << productType << "': " << totalStock << endl;
        }
        else
        {
            cout << "Lo siento, no hay suficiente stock del producto '"
                 << productType << "' para satisfacer la demanda de "
                 << cantidad_producto << " unidades." << endl;
        }
    }
    
};