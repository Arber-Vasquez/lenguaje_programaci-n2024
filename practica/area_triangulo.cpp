#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double lado1, lado2, lado3, sPerimetro, area;
	
	cout<<"ingrese los lados del triangulo \n";
	cin >>lado1>>lado2>>lado3;
	// calculamos el semiperimetro
	sPerimetro = (lado1 + lado2 + lado3)/2;
	// usamos condicionales para determinar el tipo de triangulo y mostrarlo en pantalla
	if(lado1==lado2 && lado2==lado3 && lado1==lado3){
		cout<<"Es un triangulo equilatero \n";
	}
	else if(lado1==lado2 || lado2==lado3 || lado1==lado3){
		cout<<"Es un triangulo isosceles \n";
	}
	else{
		cout<<"Es un triangulo escaleno \n";
	}
    // calculamos el area mediante la formula de heron
	area = sqrt(sPerimetro*(sPerimetro-lado1)*(sPerimetro-lado2)*(sPerimetro-lado3));
    // mostramos al usuario el area del triangulo
	cout<<"El area del triangulo es: "<<area;
	
	return 0;
}