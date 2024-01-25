#include <iostream>
using namespace std;
int main(){
	int mes;
	int dias;

	while(mes<13){
		cout<<"\n";
		cout<<"ingrese el numero de un mes del anio (1-12)"<<endl;
	    cin>>mes;
	    
	    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
	    	dias = 31;
		}
		else if(mes==4 || mes==6 || mes==9 || mes==11){
			dias = 30;
		}
		else 
		{
			dias = 28;
		}
	    switch(mes){
	    	case 1:
	    		cout<<"Enero tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 2:
	    		cout<<"Febrero tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 3:
	    		cout<<"Marzo tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 4:
	    		cout<<"Abril tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 5:
	    		cout<<"Mayo tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 6:
	    		cout<<"Junio tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 7:
	    		cout<<"Julio tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 8:
	    		cout<<"Agosto tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 9:
	    		cout<<"Setiembre tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 10:
	    		cout<<"Octubre tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 11:
	    		cout<<"Noviembre tiene "<<dias<<" dias"<<endl;
	    		break;
	    	case 12:
	    		cout<<"Diciembre tiene "<<dias<<" dias"<<endl;
	    		break;
	    	default:
	    		cout<<"El numero de mes no es valido "<<endl;
		}
	}
	
	return 0;
}