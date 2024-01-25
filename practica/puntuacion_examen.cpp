#include <iostream>
using namespace std;
int main(){
	//se declara las variables
	int respuestaCorrecta, respuestaIncorrecta, respuestaBlanco, puntosTotal;
    //declaramos una constante que sera el total de preguntas
	const int totalPreguntas = 20;
    //declaramos una variable string que se usara para determinar si el usuario desea seguir usando el programa
	string continuar;

    //hacemos uso de un bucle do while para seguir calculando en caso el usuario lo requiera
	do{
        // solicitamos los datos
		cout<<"ingrese la cantidad de respuestas correctas \n";
	    cin>>respuestaCorrecta;
	    cout<<"ingrese la cantidad de respuestas incorrectas \n";
        cin>>respuestaIncorrecta;
		cout<<"ingrese la cantidad de respuestas en blanco \n";
	    cin>>respuestaBlanco;

        //calculamos el puntaje total
	    puntosTotal = (respuestaCorrecta*4)+(respuestaIncorrecta*-2) + (respuestaBlanco*0);
        /* usamos un condicional para determinar que la suma de datos ingresados no supere los 20
        y si superase ese valor mostrará un mensaje de error*/
	    if((respuestaCorrecta+respuestaIncorrecta+respuestaBlanco > 20)){
	    	cout<<"Error, asegurese de que las respuestas no superen los 20 \n";
		}
		else{
            /* en caso la suma de los datos no supere los 20 establecido como el total de preguntas 
            mostrará el siguiente mensaje */
	    cout<<"El puntaje total es: "<<puntosTotal<<endl;
	    }
        // preguntamos al usuario si desea continuar usando el programa
	    cout<<"¿Desea seguir calculando puntos ?\n";
	    cin>>continuar;
	}
    // si el usuario ingresa un valor string "si o Si" se vuelve a ejecutar el codigo
	while(continuar == "Si" || continuar == "si");

	return 0;
}