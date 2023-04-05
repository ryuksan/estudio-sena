//La formula para hallar el area del rectangulo es: A=a*b

#include<iostream>

using namespace std;

int main()
{
// creacion de variables
	float base, altura, area, perimetro;
	
// creacion de instrucciones para el usuario.
	cout<<"Aplicacion Para Hallar El Area Y El Perimetro De Un Rectangulo en cm"<<endl<<endl;
	cout<<"el Area A=a*b y el perimetro es P=b+b+a+a asi que vamos a digitarlos"<<endl<<endl;
	cout<<"Digite la base del rectangulo"<<endl;
	cin>>base;
	cout<<endl<<"Digite la altura del rectangulo"<<endl;
	cin>>altura;
	cout<<endl;

	system("cls");

//hallando area y perimetro
	area = base*altura;
	perimetro = base + base + altura + altura;


//impresion en pantalla
	cout<<"Aplicacion Para Hallar El Area Y El Perimetro De Un Rectangulo en cm"<<endl<<endl;
	cout<<"El area del rectangulo es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"El perimetro del rectangulo es: "<<endl<<perimetro<<" cm"<<endl<<endl;
	cout<<"Futuro Programador Wilson Sanchez"<<endl<<endl;

system("pause");

	return EXIT_SUCCESS;

}