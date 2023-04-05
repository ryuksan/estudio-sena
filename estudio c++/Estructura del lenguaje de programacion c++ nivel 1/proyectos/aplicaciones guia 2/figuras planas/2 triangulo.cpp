//hallar el area de un triangulo
#include <iostream>

using namespace std;

int main()
{

//creacion de variables
	float base, altura, area, perimetro;


//instrucciones para el usuario
	cout<<"Aplicacion para hallar el area y el perimetro de un triangulo equilatero en cm"<<endl<<endl;
	cout<<"El area del triangulo es A=base*altura/2 y el perimetro de un equilatero es P=lado+lado+lado vamos hacerlo"<<endl<<endl;
	cout<<"Digite la base del triangulo: "<<endl;
	cin>>base;
	cout<<"Digite la altura del triangulo: "<<endl;
	cin>>altura;

//hallando area y perimetro
	area = base * altura / 2;
	perimetro = base*3;

	system("cls");

//impresion en pantalla
	cout<<"Aplicacion para hallar el area y el perimetro de un triangulo equilatero en cm"<<endl<<endl;
	cout<<"El area del triangulo es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"El perimetro del triangulo es: "<<endl<<perimetro<<" cm"<<endl<<endl;
	cout<<"Futuro programador Wilson Sanchez"<<endl<<endl;


	system("pause");
	return EXIT_SUCCESS;
}