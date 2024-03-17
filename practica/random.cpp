#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
	srand(time(0));
	int numeroAdivinar = rand() % 100 + 1;
	int intento, intentos = 0,maximo=5;
	
	do{
		cout<<" Ingrese un numero \t";
		cin>>intento;
		if(intento==numeroAdivinar){
			cout<<" ganaste";
		}
		else{
			if(intento<numeroAdivinar){
				cout<<"El numero es mayor"<<endl;
			}
			else{
				cout<<"El numero es menor"<<endl;
			}
			cout<<"Vuelve a intentarlo"<<endl;
			intentos++;
			
			if(intentos==maximo){
				cout<<"Te quedaste sin intentos "<<endl;
				cout<<"El numero era:"<<numeroAdivinar<<endl;
				break;
			}
		}
	}
	while(true);
	
	return 0;
}
