#include <iostream>
#include <random>
using namespace std;
int main()
{
    // definimos el arreglo
    int array_multi[4][4];

    // ingresamos valores en la matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array_multi[i][j] = rand() % 100;
        }
    }

    // imprimir
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array_multi[i][j] << endl;
        }
    }
    return 0;
}