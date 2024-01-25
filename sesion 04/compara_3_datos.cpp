#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout << "ingrese los valores a comparar";
	cin>>num1 >>num2 >>num3;
	if(num1==num2 || num2==num3 || num1==num3){
			cout << "Ingrese valores distintos ";
	return 1;
	}
	
	if(num1>num2,num2>num3){
		cout<<" El numero mayor es:\t"<<num1<<endl;
		cout<<" El numero menor es:\t"<<num3<<endl;
	}
	else if(num2>num1,num3>num1){
				cout<<" El numero mayor es:\t"<<num2<<endl;
				cout<<" El numero menor es:\t"<<num1<<endl;
			else if(num3>num1,num1>num2){
					cout<<" El numero mayor es:\t"<<num3<<endl;
					cout<<" El numero menor es:\t"<<num2<<endl;
				}
			}
		}
	}
	return 0;
}