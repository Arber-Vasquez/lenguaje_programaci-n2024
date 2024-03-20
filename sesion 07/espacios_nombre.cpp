#include <iostream>
using namespace std;
namespace Espacio1 {
    int valor = 5;
}

namespace Espacio2 {
    int valor = 10;
}

int main() {
    cout << "Valor en Espacio1: " << Espacio1::valor << endl;
    cout << "Valor en Espacio2: " << Espacio2::valor << endl;
    
    return 0;
}
