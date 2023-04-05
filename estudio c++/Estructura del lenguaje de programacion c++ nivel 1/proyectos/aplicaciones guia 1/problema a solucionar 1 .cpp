#include <iostream>

using namespace std;


int main() 
{ 
	int variable1;
	char variable2[30];
	int variable3;
	int variable4;
	int variable5;
	char variable6;
	
	cout<<"Digitar la variable1"<<endl;
	cin>>variable1;
	cout<<"Dar una variable2"<<endl;
	cin.getline(variable2, 30, '/n');
	cout<<"Digitar la variable3"<<endl;
	cin>>variable3;
	cout<<"Digitar la variable4"<<endl; 
	cin>>variable4;
	cout<<"Digitar la variable5"<<endl;
	cin>>variable5;
	cout<<"digitar la variable6"<<endl;
	cin>>variable6;
	
	system("cls"); 	
	
	cout<<"La variable1 es: "<< variable1 <<endl;
	cout<<" "<<endl;	
	cout<<"La variable2 es: "<< variable2 <<endl;
	cout<<" "<<endl;		
	cout<<"La variable3 es: "<<variable3<<endl;
	cout<<" "<<endl;
	cout<<"La variable4 es: "<< variable4 <<endl;
	cout<<" "<<endl;	
	cout<<"la variable5 es: "<< variable5 <<endl;
	cout<<" "<<endl;
	cout<<"la variable6 es: "<<variable6<<endl;
	cout<<" "<<endl;
	system("pause"); 
	return EXIT_SUCCESS;
}