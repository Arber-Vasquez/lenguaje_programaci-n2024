#include <iostream>
using namespace std;
int main() {
    int entero = 10;
    double flotante = static_cast<double>(entero); // Conversión explícita de entero a flotante
    
    cout << "Flotante: " << flotante << endl;
    
    return 0;
}
