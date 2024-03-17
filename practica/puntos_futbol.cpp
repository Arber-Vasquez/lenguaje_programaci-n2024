#include <iostream>
using namespace std;
int main(){
	// se declara las variables en este caso de tipo entero 
	int partidoGanado, partidoEmpate, partidoPerdido, puntajeTotal;
    // se declara el total de partidos como un valor constante
	const int totalPartidos = 20;
	string continuar;
	
    //hacemos uso de un bucle do while para seguir calculando en caso el usuario lo requiera
	do{
        //solicitamos los datos 
		cout<<"ingrese la cantidad de partidos ganados \n";
	    cin>>partidoGanado;
	    cout<<"ingrese la cantidad de partidos empatados \n";
        cin>>partidoEmpate;
		cout<<"ingrese la cantidad de partidos perdidos \n";
	    cin>>partidoPerdido;
        // calculamos el total de puntos 
	    puntajeTotal = (partidoGanado*3)+(partidoEmpate);

        //usamos un condicional para determinar que la suma de datos ingresados no supere el total de partidos
	    if((partidoGanado+partidoPerdido+partidoEmpate > 20)){
	    	cout<<"Error, la suma de partidos jugados no puede superar 20 \n";
		}
		else{
	        cout<<"El puntaje total es: "<<puntajeTotal<<endl;
	    }
        //preguntamos al usuario si desea seguir usando el programa
	    cout<<"¿Desea seguir calculando puntos ?\n";
	    cin>>continuar;
	}
    // si el usuario ingresa un valor string "si o Si" se vuelve a ejecutar el codigo
	while(continuar == "Si" || continuar == "si");

	return 0;
}
