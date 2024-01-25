#include <iostream>
using namespace std;
int main(){
	int cantidadDias, anios, meses, dias, indiceMes;
	
	cout<<"Ingrese la cantidad de dias"<<endl;
	cin>>cantidadDias;
	
	indiceMes = (cantidadDias % 365) % 30;
	meses = (cantidadDias % 365) / 30;
	anios = cantidadDias / 365;
	
	const char* Meses[]={"Enero", "Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Setiembre","Octubre","Noviembre","Diciembre"};
	const char* mesRecae = Meses[indiceMes];
	
	cout<<"Anios: "<<anios<<endl;
	cout<<"Meses: "<<meses<<endl;
	cout<<"Dias: "<<dias<<endl;
	cout<<"El mes en el que recae es: "<<mesRecae<<endl;
	
	return 0;
}