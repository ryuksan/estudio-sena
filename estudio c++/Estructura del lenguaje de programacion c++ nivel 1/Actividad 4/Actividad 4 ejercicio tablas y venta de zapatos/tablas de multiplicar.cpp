/*Desarrolle un programa que le permita al usuario seleccionar una tabla de multiplicación. El programa debe desplegar los resultados de dicha tabla. A continuación, se muestra un ejemplo de cómo debe quedar dicho programa:
Para*/
#include <iostream>

using namespace std;

int main()
{
	int numero, i, a=1,b=0;

	cout<<"APLICACION PARA HACER LAS TABLAS DE MULTIPLICAR PARA NUMEROS DEL 1 AL 20"<<endl<<endl;

	cout<<"Tablas de multiplicar son: "<<endl<<endl;

	while(b<20)
	{
		b=b+a;
		cout<<"Tabla del "<<b<<endl;
	}
	cout<<endl;

	do
	{	
		cout<<"digite un numero "<<endl;
	cin>>numero;
	cout<<endl;

	if(numero>20)
	{
		cout<<"ERROR DIGITO UN NUMERO ERRONEO"<<endl<<endl;
	}
		else if(numero<1)
		{
			cout<<"ERROR DIGITO UN NUMERO ERRONEO"<<endl<<endl;
		}
	else
	{
		cout<<"La tabla de multiplicar del numero "<<numero<<" es:"<<endl<<endl;
	}
	

	}while((numero<1)||(numero>=21));

	for(int i=1;i<=20;i++)
	{

		cout<<numero<<" X "<< i <<" = "<<numero*i<<endl;
	}
	cout<<endl;

	cout<<"CREADO POR: Wilson Sanchez futuro programador."<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}