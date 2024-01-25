#include <iostream>
using namespace std;
int main(){
	int numero,suma;
	cout<< "Ingrese el numero final para sumar \n";
	cin >> numero;
	suma = 0;
	for(int i=1; i<=numero; ++i){
		suma += i;
	}
	cout << "La suma desde 1 hasta "<<numero<<" es: "<<suma;
	
	return 0;
}