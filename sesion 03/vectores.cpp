#include <iostream>
using namespace std;
#include <vector>
int main() {
    // Declaración e inicialización de un vector de enteros
    vector<int> vec = {1, 2, 3, 4, 5};

    // Accediendo a elementos del vector mediante índices
    cout << "Elementos del vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    // Agregando un nuevo elemento al final del vector
    vec.push_back(6);
    // Mostrando el contenido actualizado del vector
    cout << "Elementos del vector después de agregar 6: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
