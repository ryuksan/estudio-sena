#include <iostream>

using namespace std;
//Declaracion de la funcion
int suma(int numero_1, int numero_2);
//Definicion de la funcion main
int main()
{
	int a, b;
	cout <<"Ingrese el primer numero"<<endl;
	cin >> a;
	cout <<"Ingrese el segundo numero"<<endl;
	cin >> b;
//llamado a la funcion suma
	cout<<"La suma de los numeros es: "<< suma(a,b) <<endl;
	system("pause");
	return EXIT_SUCCESS;
}
//Definicion de la funcion con sus parametros
int suma(int numero_1, int numero_2)
{
	return numero_1 + numero_2;
}