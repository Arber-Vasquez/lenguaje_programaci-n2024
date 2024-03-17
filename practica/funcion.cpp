#include <iostream>
using namespace std;
int sueldoSemanal(int horasTrabajo){
	int pagoNormal = 20;
	int pagoExtra = 25;
	int horasExactas = 40;
	
	if(horasTrabajo <= horasExactas){
		return horasTrabajo * pagoNormal;
	}
	else{
		int horasExtra = horasTrabajo - horasExactas;
		return (horasExactas*pagoNormal) + (horasExtra*pagoExtra);
	}
}
int main(){
	int horasTrabajadas;
	cout<<"Ingrese las horas que ha trabajado durante la semana";
	cin>>horasTrabajadas;
	int sueldo = sueldoSemanal(horasTrabajo);
	cout<<"Su sueldo es de: "<<sueldo<<endl;
	
	return 0;
}
