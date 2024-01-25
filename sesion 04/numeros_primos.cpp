#include <iostream>
using namespace std;

int main(){
    int N;

    cout << "Ingrese un numero:\n";
    cin >> N;

    bool esPrimo = true;

    if (N <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= N; ++i) {
            if (N % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << N << " es un numero primo." << endl;
    } else {
        cout << N << " no es un numero primo." << endl;
    }

    return 0;
}
