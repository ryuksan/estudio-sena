//hallar el area y el diametro de un circulo
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//creacion de variables

	float radio, pi=3.14, diametro, radio2, area; 

//instrucciones para el usuario
	cout<<"Aplicacion para hallar el area y el diametro de un circulo en cm"<<endl<<endl;
	cout<<"El area de un circulo se halla A=pi*r^2 "<<endl<<endl;
	cout<<"el diametro de un circulo se halla D=r*2 vamos a hacerlo"<<endl<<endl;
	cout<<"digite el radio del circulo: "<<endl;
	cin>>radio;

//hallar area y diametro del circulo

	radio2 = pow(radio, 2);
	area = pi * radio2;
	diametro = radio * 2;

	system("cls");

//impresion en la pantalla

	cout<<"Aplicacion para hallar el area y el diametro de un circulo en cm"<<endl<<endl;
	cout<<"el area del circulo es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"el diametro del circulo es: "<<endl<<diametro<<" cm"<<endl<<endl;
	cout<<"Futuro programador Wilson Sanchez"<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}