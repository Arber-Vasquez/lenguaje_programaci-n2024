#include <iostream>
using namespace std;
int sueldoSemanal(int horasTrabajo){
	int pagoNormal = 20;
	int pagoExtra = 25;
	int horasExactas = 40;
	//determinar las horas trabajadas
	if(horasTrabajo <= horasExactas){
		return horasTrabajo * pagoNormal;
	}
	else{
		int horasExtra = horasTrabajo - horasExactas;
		return (horasExactas*pagoNormal) + (horasExtra*pagoExtra);
	}
}
int main(){
	int horasTrabajo;
	cout<<"Ingrese las horas que ha trabajado durante la semana";
	cin>>horasTrabajo;
	int sueldoSemanal = sueldoSemanal(horasTrabajo);
	cout<<"Su sueldo es de: "<<sueldoSemanal<<endl;
	
	return 0;
}