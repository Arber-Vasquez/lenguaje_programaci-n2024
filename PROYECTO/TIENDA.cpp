#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

const int MAX_CLIENTES = 50;
const int MAX_PRODUCTOS = 50;

class Cliente
{
private:
    string nombre;
    int id;
    int telefono;

public:
    Cliente(const string &nombre, int telefono) : nombre(nombre), telefono(telefono)
    {
        id = generarId();
    }

    int getId() const
    {
        return id;
    }

    string getNombre() const
    {
        return nombre;
    }

    int getTelefono() const
    {
        return telefono;
    }

private:
    int generarId()
    {
        return rand() % 1000 + 1;
    }
};

class Producto
{
private:
    string nombre;
    int codigo;
    float precio;
    int cantidad;

public:
    Producto(const string &nombre, float precio, int cantidad) : nombre(nombre), precio(precio), cantidad(cantidad)
    {
        codigo = generarCodigo();
    }

    int getCodigo() const
    {
        return codigo;
    }

    string getNombre() const
    {
        return nombre;
    }

    float getPrecio() const
    {
        return precio;
    }

    int getCantidad() const
    {
        return cantidad;
    }

    void vender(int cantidadAVender)
    {
        if (cantidadAVender > 0 && cantidadAVender <= cantidad)
        {
            cantidad -= cantidadAVender;
            cout << "Venta realizada con exito." << endl;
        }
        else
        {
            cout << "No hay suficientes productos en el inventario para realizar la venta." << endl;
        }
    }

private:
    int generarCodigo()
    {
        return rand() % 9000 + 1000;
    }
};

class Tienda
{
private:
    vector<Cliente> clientes;
    vector<Producto> inventario;
    int maxClientes;
    int maxProductos;

public:
    Tienda(int maxClientes, int maxProductos) : maxClientes(maxClientes), maxProductos(maxProductos) {}

    void menu() const
    {
        cout << "\n*TIENDA VIRTUAL*";
        cout << "\n1. Crear cliente nuevo.";
        cout << "\n2. Ver clientes ingresados.";
        cout << "\n3. Crear inventario.";
        cout << "\n4. Ver inventario";
        cout << "\n5. Vender un producto.";
        cout << "\n6. Salir.";
        cout << "\nIngrese su opcion: ";
    }

    void crearCliente()
    {
        if (clientes.size() < maxClientes)
        {
            string nombre;
            int telefono;
            cout << "\nIngrese el nombre del cliente nuevo: ";
            cin >> nombre;
            cout << "Ingrese el numero de telefono del cliente nuevo (Sin espacios ni guiones): ";
            cin >> telefono;
            clientes.push_back(Cliente(nombre, telefono));
            cout << "Cliente creado con exito. ID asignado: " << clientes.back().getId() << endl;
        }
        else
        {
            cout << "Limite de clientes alcanzado." << endl;
        }
    }

    void verClientes() const
    {
        if (!clientes.empty())
        {
            cout << "\nClientes ingresados:" << endl;
            for (const auto &cliente : clientes)
            {
                cout << "\nNombre de cliente: " << cliente.getNombre() << endl;
                cout << "Numero de ID de cliente: " << cliente.getId() << endl;
                cout << "Numero de telefono de cliente: " << cliente.getTelefono() << endl;
            }
        }
        else
        {
            cout << "\nNo hay clientes ingresados." << endl;
        }
    }

    void crearInventario()
    {
        if (inventario.size() < maxProductos)
        {
            string nombre;
            float precio;
            int cantidad;
            cout << "\nIngrese el nombre del producto: ";
            cin >> nombre;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            cout << "Ingrese la cantidad de productos: ";
            cin >> cantidad;
            inventario.push_back(Producto(nombre, precio, cantidad));
            cout << "Producto creado con Ã©xito. Codigo asignado: " << inventario.back().getCodigo() << endl;
        }
        else
        {
            cout << "Limite de productos alcanzado." << endl;
        }
    }

    void verInventario() const
    {
        if (!inventario.empty())
        {
            cout << "\nInventario:" << endl;
            for (const auto &producto : inventario)
            {
                cout << "\nNombre del producto: " << producto.getNombre() << endl;
                cout << "Codigo del producto: " << producto.getCodigo() << endl;
                cout << "Precio del producto: " << producto.getPrecio() << endl;
                cout << "Cantidad en inventario: " << producto.getCantidad() << endl;
            }
        }
        else
        {
            cout << "\nNo hay productos en inventario." << endl;
        }
    }

    void venderProducto()
    {
        if (inventario.empty())
        {
            cout << "\nNo hay productos en el inventario para vender." << endl;
        }
        else
        {
            int cod_producto;
            cout << "\nIngrese el codigo del producto a vender: ";
            cin >> cod_producto;
            auto it = find_if(inventario.begin(), inventario.end(), [cod_producto](const Producto &p)
                              { return p.getCodigo() == cod_producto; });
            if (it == inventario.end())
            {
                cout << "\nEl producto con el codigo ingresado no existe en el inventario." << endl;
            }
            else
            {
                int cantidad;
                cout << "Ingrese la cantidad a vender: ";
                cin >> cantidad;
                it->vender(cantidad);
            }
        }
    }
};

int main()
{
    srand(time(nullptr));

    Tienda tienda(MAX_CLIENTES, MAX_PRODUCTOS);

    int opcion, opc2;

    do
    {
        tienda.menu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            tienda.crearCliente();
            break;

        case 2:
            tienda.verClientes();
            break;

        case 3:
            tienda.crearInventario();
            break;

        case 4:
            tienda.verInventario();
            break;

        case 5:
            tienda.venderProducto();
            break;

        case 6:
            cout << "Saliendo del programa." << endl;
            return 0;

        default:
            cout << "Ha elegido una opcion invalida." << endl;
        }

        do
        {
            cout << "\nIngrese 1 para volver al menu y 0 para salir: ";
            cin >> opc2;
            if (opc2 != 1 && opc2 != 0)
            {
                cout << "Ha elegido una opcion invalida." << endl;
            }
        } while (opc2 != 1 && opc2 != 0);
    } while (opc2 == 1);

    return 0;
}