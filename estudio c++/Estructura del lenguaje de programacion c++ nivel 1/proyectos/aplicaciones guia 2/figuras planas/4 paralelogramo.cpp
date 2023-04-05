//hallar el area y perimetro de un paralelogramo A=b*h  P= 2*(lado 1 + lado 2)
#include <iostream>

using namespace std;

int main()
{

//creando variables
	float lado_1, lado_2, altura, area, perimetro;


//instrucciones para el usuario
	cout<<"Aplicacion para hallar el area y el perimetro de un paralelogramo en cm"<<endl<<endl;
	cout<<"El area de un paralelogramo se halla A=b*h "<<endl<<endl;
	cout<<"el perimetro de un paralelogramo se halla P= 2 * (lado 1 + lado 2) entonces vamos a hacerlo"<<endl<<endl;
	cout<<"digite el lado 1 o base del paralelogramo: "<<endl;
	cin>>lado_1;
	cout<<"digite el lado 2 del paralelogramo: "<<endl;
	cin>>lado_2;
	cout<<"digite la altura recuerde que no es el mismo valor de uno de los lados "<<endl;
	cin>>altura;

//hallando area y perimetro

	perimetro = 2 * (lado_1+lado_2);
	area = lado_1 * altura;

	system("cls");

//imprecion en pantalla
	cout<<"Aplicacion para hallar el area y el perimetro de un paralelogramo en cm"<<endl<<endl;
	cout<<"El Area del paralelogramo es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"el perimetro del paralelogramo es: "<<endl<<perimetro<<" cm"<<endl<<endl;
	cout<<"Futuro programador Wilson Sanchez"<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}