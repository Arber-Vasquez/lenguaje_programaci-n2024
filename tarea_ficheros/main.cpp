#include <iostream>
#include <string>
#include "vendedor.cpp"
using namespace std;

int main(){
    Ventas venta(50); //Creamos un objeto de la clase ventas con una capacidad para 50 productos vendidos
    Vendedor vendedor_1("Juan", "Aguilar");
    
    cout << "Ventas  realizadas por Juan Aguilar:" << endl;
    venta.mostrarVentas (); //Mostramos las ventas realizadas por Juan Aguilar 
    
    int cantidad = 2 3;
    string nombreProducto = "Laptop HP"; 
    
    venta.agregar Venta (cantidad,nombreProducto,"HP"); //Se agrega una venta a los registros de ventas  del vendedor Juan Aguilar 
    /*Se agrega el producto  a la lista de ventas del vendedor*/
    if (venta.agregar Venta(&vendedor_1,cantidad,nombreProducto)) {//Si se puede agregar la venta devuelve true
    if (venta.agregar
    
}