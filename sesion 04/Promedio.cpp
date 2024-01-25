#include <iostream>
using namespace std;

int main(){
	double notas[3], promedio;

	cout << "Ingrese las calificaciones en el orden correspondiente"<<endl;
	cin >> notas[0] >>notas[1] >>notas[2];
	promedio = (notas[0] * 0.15)+ (notas[1] * 0.35)+ (notas[2] * 0.50);
	cout <<"El promedio del alumno es: "<<endl;
	cout << promedio <<"\t";
	if(promedio > 12){
		cout << "Felicidades aprobaste";
	}
	else{
		cout << "Reprobaste";
	}
	return 0;
}