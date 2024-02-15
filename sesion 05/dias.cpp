#include <iostream>
using namespace std;
int main(){
	int dia;
	
	cout<<"-------------\n";
	cout<<"Dias de la semana\n";
	cout<<"-------------\n";
    cout<<"Ingrese un numero del 1 al 7"<<endl;
	cin>>dia;
    while(dia>7 || dia<=0){
        cout<<"Ingrese un numero del 1 al 7"<<endl;
        cin>>dia;
    }

	switch(dia){
		case 1:
			cout<<"Lunes";
			break;
		case 2:
			cout<<"Martes";
			break;
		case 3:
			cout<<"Miercoles";
			break;
		case 4:
			cout<<"Jueves";
			break;
		case 5:
			 cout<<"Viernes";
			 break;
		case 6:
			cout<<"Sabado";
			break;
		case 7:
			cout<<"Domingo";
			break;
		default :
			cout<<"error"<<endl;
            break;
	}
    return 0;
}