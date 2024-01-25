#include <iostream>
using namespace std;
int main(){
	string nota;
	
	cout<<"Ingrese la nota alfanumerica\n";
	cin>>nota;
	
	if(nota=="A" || nota=="a"){
		cout<<"Su nota esta en el intervalo 18 a 19";
	}
	else if(nota=="B" || nota=="b" ){
		cout<<"Su nota esta en el intervalo 14 a 17";
	}
	else if(nota=="C" || nota=="c"){
		cout<<"Su nota esta en el intervalo 11 a 14";
	}
	else if(nota=="D" || nota=="d"){
		cout<<"Su nota esta en el intervalo 5 a 10";
	}
	else if(nota=="E" || nota=="e"){
		cout<<"Su nota esta en el intervalo 0 a 5";
	}
	else{
		cout<<"Ingrese una nota valida";
	}
	return 0;
}