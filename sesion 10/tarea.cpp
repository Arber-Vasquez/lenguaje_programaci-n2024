#include <iostream>
using namespace std;
//funcion para determinar si el numero ingresado es primo
bool Primo(int numero){
	if(numero <=1){
		return false;
	}
	for(int i=2;i*i <= numero;i++){
		if(numero%i==0){
			return false;
		}
	}
	return true;
}
// desarrollo del programa que se ejecutara 10 veces
void ejecutar(){
	//definimos el tamaño del arreglo
	int tamano = 10;
	int numerosPrimos[tamano];
	//declaramos un puntero que almacena los valores del array de numeros
	int *puntero = numerosPrimos;
	
	// usamosun bucle for para solicitar los numeros
	for(int i=0; i<tamano; i++){
		int numero;
		cout<<endl;
		cout<<" Ingrese un numero"<<endl;
		cin>>numero;
		
		//llamamos la funcion para determianr si los numeros son primos
		if(Primo(numero)){
			//si los numeros son primos los numeros seran almacenados en el array
			*puntero = numero;
			// los espacios en el array se incrementa
			puntero++;
		}
		else{
			// en caso no sea primo el array deja espacio a otro valor
			i--;
		}
    }
    // imprimimos los datos almacenados en el array 
    // solo mostrara los numeros que hayan cumplido con la condicion
	cout<<"De los numeros ingresados los siguientes son primos"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<numerosPrimos[i]<<",";
	}
	
}
int main(){
	// usamos un bucle for para ejecutar la funcion que contiene todo el programa
	// para que se ejecute 10 veces 
	for(int i=0; i<10; i++){
		cout<<"\nNumero"<<i+1<<endl;
		ejecutar();
	}
	return 0;
}