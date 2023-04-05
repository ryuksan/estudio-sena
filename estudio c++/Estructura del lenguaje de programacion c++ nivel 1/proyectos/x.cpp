#include<iostream>
#include<iomanip> //Para usar el fixd y el setprecision()
#include<conio.h> //Para usar el getch
#include<cstring> //Para usar el strcmp
using namespace std;
 
int main(){
	double deuda=0, tarifa=0, pago=0, pag_mes=0;
	int mes;
 
	while(1){
		cout<<"\nIngrese la tarifa: "; cin>>tarifa;
		cout<<"Ingrese los meses: "; cin>>mes;
		cout<<"Ingrese la deuda: "; cin>>deuda;
			pag_mes = tarifa * mes;
			pago = pag_mes + deuda;
		cout<<"\n---------------------------------";
		cout<<"\nPago por meses: "<<fixed<<setprecision(2)<<pag_mes;
		cout<<"\nTotal a pagar:  "<<fixed<<setprecision(2)<<pago;
		cout<<"\n---------------------------------";
		cout<<endl<<"\n---------------------------------"<<endl;
	}
	getch();
	return 0;
}