#include <iostream>
using namespace std;
int main(){
	double saldo=2500, cantidadRetirar, cantidadDepositar;
	int opcion;
	
	while(true){
		cout<<"Que desea realizar\n";
		cout<<"\n";
		cout<<"1. Ver saldo\n";
		cout<<"2. Retirar dinero\n";
		cout<<"3. Depositar dinero\n";
		cout<<"4. salir\n";
		cout<<"\n";
		cout<<"Elija una opcion\n";
		cin>> opcion;
		
		switch(opcion){
			case 1:
				cout<<"Su saldo actual es: \n"<<saldo<<"$"<<endl;
				break;
			case 2:
				cout<<"Cuanto desea retirar \n";
				cin>>cantidadRetirar;
				if(cantidadRetirar > saldo){
					cout<<"\n";
					cout<<"Saldo insuficiente \n";
				}
				else{
					saldo -= cantidadRetirar;
					cout<<"\n";
					cout<<"Retiro realizado \n";
					cout<<"Su saldo restante es: "<<saldo<<"$"<<endl;
				}
				break;
			case 3:
				cout<<"Cuanto es el monto que desea depositar \n";
				cin>>cantidadDepositar;
				saldo += cantidadDepositar;
				cout<<"\n";
				cout<<"Deposito realizado\n";
				cout<<"Su saldo actual es de: "<<saldo<<" $"<<endl;
				break;
			case 4:
				cout<<"";
				return 0;
			default:
				cout<<"Error. Elija otra opcion \n";
		}
	}
	return 0;
}