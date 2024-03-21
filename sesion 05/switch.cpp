#include <iostream>
using namespace std;
int main(){
    int opcion;
    cout << "Ingrese un numero de 1 a 3"<< endl;
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "ingresaste \t" << opcion;
            break;
        case 2:
            cout << "ingresaste \t" << opcion;
            break;
        case 3:
            cout << "ingresaste \t" << opcion;
            break;
        default:
            cout << "ingresaste un numero errado";
        break;
    }

    return 0;
}