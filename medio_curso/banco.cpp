#include <iostream>
#include <string.h>
using namespace std;
struct Usuario{
	int N;
	float Aumento=0, credito;
	string Nombre;
	float tipo_tarjeta;
	float ingresoSemanal;
};
int main(){
	// solicitamos datos del usuario
	Usuario usuario1;
	cout<<" Ingrese su nombre"<<endl;
	cin>>usuario1.Nombre;
	cout<<"Ingrese el tipo de tarjeta : "<<endl;
	cin>>usuario1.N;
	cout<<" Ingrese el credito de su cuenta "<<endl;
	cin>>usuario1.credito;
	//verificamos el tipo de tarjeta y su valor
	for(int i=0; i<usuario1.N; i++){
		if(usuario1.N==1){
			usuario1.tipo_tarjeta=0.25;
		}
		else if(usuario1.N==2){
			usuario1.tipo_tarjeta=0.35;
		}
		else if(usuario1.N==3){
			usuario1.tipo_tarjeta=0.40;
		}
		else{
			usuario1.tipo_tarjeta=0.50;
		}
	}
	//calculamos el incremento
	usuario1.Aumento = usuario1.credito*usuario1.tipo_tarjeta;
	//calculamos el ingreso semanal
	usuario1.ingresoSemanal = usuario1.credito + usuario1.Aumento;
	
	cout<<"Nombre: \t"<<usuario1.Nombre<<endl;
	cout<<"Tarjeta:\t"<<usuario1.N<<endl;
	cout<<"Credito: \t"<<usuario1.credito<<endl;
	cout<<"Su credito se incremento ahora cuenta con:\t"<<usuario1.ingresoSemanal;
	
	return 0;
}