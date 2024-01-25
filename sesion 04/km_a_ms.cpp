#include <iostream>
using namespace std;
int main(){
	double metros_segundos, kilometros_hora;
	cout<< "Ingrese la velocidad en kilometros por hora\n";
	cin>>kilometros_hora;
	metros_segundos = kilometros_hora / 3.6;
	cout<<"La cantidad ingresada en kilometros por hora equivale a:\n";
	cout<<metros_segundos<<" metros por segundo";
}