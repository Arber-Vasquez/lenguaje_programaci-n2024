#include <iostream>
using namespace std;
int main(){
    //declaramos los dias y el total como valores enteros
	int lunes,martes,miercoles,jueves,viernes,sabado,TOTAL;
    // el incentivo sera de tipo flotante
	double incentivo;
    // declaramos los valores constantes en este caso el incentivo minimo y la unidad 
	const int Minimo = 100;
	const double unidad = 1.0;

    // solicitamos la cantidad de incentivos diarias 
	cout<<"ingrese la produccion de cada dia laboral \n";
	cin>>lunes>>martes>>miercoles>>jueves>>viernes>>sabado;

    // calculamos la suma de incentivos diarios
	TOTAL=lunes+martes+miercoles+jueves+viernes+sabado;
    // calculamos el incentivo multiplicando la suma de los incentivos semanal por la unidad preestablecido
	incentivo = TOTAL * unidad;
    // mostramos el resultado
	cout<<"El incentivo semanal es: "<<incentivo<<"$";
	
	return 0;
}