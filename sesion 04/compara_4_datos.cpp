#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, num4;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    if (num1 > num2) {
        swap(num1, num2);
    }

    if (num2 > num3) {
        swap(num2, num3);
    }

    if (num3 > num4) {
        swap(num3, num4);
    }

    if (num1 > num2) {
        swap(num1, num2);
    }

    if (num2 > num3) {
        swap(num2, num3);
    }

    if (num1 > num2) {
        swap(num1, num2);
    }
    cout << "Números ordenados de menor a mayor: "
              << num1 << "," << num2 << "," << num3 << "," << num4 << endl;
              
    return 0;
}
