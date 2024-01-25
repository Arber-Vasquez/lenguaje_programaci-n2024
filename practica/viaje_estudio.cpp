#include <iostream>
using namespace std;
int main(){
	// se declara el costo del bus como un valor constante
	const int costo_bus = 4000;
	int monto_pagar, TOTAL, alumnos;

	cout<<"Ingrese la cantidad de alumnos \n";
	cin>>alumnos;
	//usamos condicionales para determinar el monto que debe pagar cada estudiante
	if(alumnos>=100){
		monto_pagar = 65;
	}
	else if(alumnos>50 && alumnos<100){
		monto_pagar = 70;
	}
	else if(alumnos>30 && alumnos<50){
		monto_pagar = 95;
	}
	else{
		cout<<"no podemos determinar el monto \n";
		return 1;
	}
	// calculamos el total a pagar
	TOTAL = costo_bus + (alumnos * monto_pagar);
	
	// mostramos el total a pagar a la agencia de viajes y el monto que debe pagar cada estudiante
	cout<<"El pago a la compania de autobuses es de: "<<TOTAL<<"$ \n";
	cout<<"El monto que debe pagar cada alumno es de: "<<monto_pagar<<"$";
	
	return 0;
}