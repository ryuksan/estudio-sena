//hallar el area de un rombo A=diagonal mayor * diagonal menor / 2
// perimetro es diagonal mayor / 2 ^ 2 + diagonal menor / 2 ^2 
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

// creacion de variables
	float diagonal_mayor, diagonal_menor, area, perimetro, diagonal_mayor2, diagonal_menor2;

//instrucciones para el usuario
	cout<<"Aplicacion para hallar el area y el perimetro de un rombo en cm"<<endl<<endl;
	cout<<"El area del rombo es A=diagonal mayor * diagonal menor / 2 "<<endl;
	cout<<"El perimetro es: la mitad de cada diagonal elevada al cuadrado y la suma de sus raices."<<endl<<endl;

	cout<<"Digite la diagonal mayor: "<<endl;
	cin>>diagonal_mayor;
	cout<<"Digite la diagonal menor: "<<endl;
	cin>>diagonal_menor;

//hallando area y perimetro
	area = diagonal_mayor * diagonal_menor / 2;
	diagonal_mayor2 = diagonal_mayor / 2;
	diagonal_menor2 = diagonal_menor / 2;
	diagonal_mayor2 = pow(diagonal_mayor2, 2);
	diagonal_menor2 = pow(diagonal_menor2, 2);
	perimetro = sqrt(diagonal_mayor2 + diagonal_menor2) * 4;
	

	system("cls");


//imprecion en pantalla
	cout<<"Aplicacion para hallar el area y el perimetro de un rombo en cm"<<endl<<endl;
	cout<<"El Area del rombo es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"el perimetro del rombo es: "<<endl<<perimetro<<" cm"<<endl<<endl;
	cout<<"Futuro programador Wilson Sanchez"<<endl<<endl;





	system("pause");
	return EXIT_SUCCESS;
}