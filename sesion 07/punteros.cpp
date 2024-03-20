#include <iostream>
using namespace std;
void saludar() {
    cout << "Hola, mundo!" << endl;
}
void ejecutarFuncion(void (*func)()) {
    func();
}
int main() {
    ejecutarFuncion(saludar);
    return 0;
}
