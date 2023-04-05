//hallar el area y el perimetro de un trapecio
#include <iostream>

using namespace std;

int main()
{
//creacion de variables
	float base_mayor, base_menor, altura, lado, area, perimetro;

//instrucciones pra el usuario
	cout<<"Aplicacion para hallar el area y el perimetro de un trapecio en cm"<<endl<<endl;
	cout<<"El area de un trapecio se halla A=((B+b)/2)*h "<<endl<<endl;
	cout<<"el perimetro de un trapecio se halla P= B+b+l+l"<<endl;
	cout<<"siendo sus laterales de la misma dimencion entonces vamos a hacerlo"<<endl<<endl;
	cout<<"digite la base mayor del trapecio: "<<endl;
	cin>>base_mayor;
	cout<<"digite la base menor del trapecio: "<<endl;
	cin>>base_menor;
	cout<<"digite la altura del trapecio: "<<endl;
	cin>>altura;
	cout<<"digite el valor de un lateral del trapecio: "<<endl;
	cin>>lado;

//hallando area y perimetro


	lado *= 2;
	area = ((base_mayor + base_menor) / 2)* altura;
	perimetro = base_mayor + base_menor + lado;

	


	system("cls");
//imprecion en pantalla

	cout<<"Aplicacion para hallar el area y el perimetro de un trapecio en cm"<<endl<<endl;
	cout<<"el area del trapecio es: "<<endl<<area<<" cm^2"<<endl<<endl;
	cout<<"el perimetro del trapecio es: "<<endl<<perimetro<<" cm"<<endl<<endl;
	cout<<"Futuro programador Wilson Sanchez"<<endl<<endl;


	system("pause");
	return EXIT_SUCCESS;

}