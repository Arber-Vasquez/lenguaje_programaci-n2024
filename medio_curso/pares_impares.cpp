#include <iostream>
using namespace std;
int main(){
	//usamos dos arreglos para almacenar los numeros pares e impares
	int pares[5], impares[5];
	// se declara dos variables auxiliares
	int indicePares=0, indiceImpares=0;
	//usamos un bucle for para determinar el indice de los numeros pares e impares en los arrays
	for(int i=1; i<=10; i++){
		if(i%2==0){
			pares[indicePares]=i;
			indicePares++;
		}
		else{
			impares[indiceImpares]=i;
			indiceImpares++;
		}
	}
	// mostramos el array de los numeros pares 
	cout<<"Los numeros pares son: "<<" \t";
	for(int i=0;i<indicePares;i++){
		cout<<pares[i]<<"\t";
	}
	cout<<endl;
	//mostramos el array de los nuemros impares
	cout<<"Los numeros impares son:"<<"\t";
	for(int i=0;i<indiceImpares;i++){
		cout<<impares[i]<<"\t";
	}
	return 0;
}