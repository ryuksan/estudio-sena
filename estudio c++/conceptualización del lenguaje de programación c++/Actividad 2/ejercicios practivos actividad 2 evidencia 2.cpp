/*desarrolle una aplicación que solicite al usuario un número entero y como resultado muestre la tabla de multiplicar de dicho número.
*/
#include <iostream>

using namespace std;

int main()
{
	int numero, i;

	cout<<"APLICACION PARA HACER LA TABLA DE MULTIPLICAR PARA NUMEROS > = 1 Y <=100"<<endl<<endl;

	do
	{
		cout<<"digite un numero "<<endl;
	cin>>numero;
	}while((numero<1)||(numero>=101));

	system("cls");

	cout<<"APLICACION PARA HACER LA TABLA DE MULTIPLICAR PARA NUMEROS > = 1 Y <=100"<<endl<<endl;

	for(int i=1;i<=100;i++)
	{
		cout<<numero<<" * "<< i <<" = "<<numero*i<<endl<<endl;
	}

	cout<<"creado por: wilson sanchez."<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}
