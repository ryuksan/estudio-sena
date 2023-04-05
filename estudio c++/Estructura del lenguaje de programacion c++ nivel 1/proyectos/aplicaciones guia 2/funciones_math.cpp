#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout<<"demostracion de funciones matematicas en c++"<<endl<<endl;
	cout<<"funcion fmax para hallar el mayor de dos numeros: fmax(18.9, 18) = ";
	cout<<fmax(18.9, 18)<<endl<<endl;
	cout<<"funcion fmin para hallar el menor de dos numeros: fmin(18.9, 18) = ";
	cout<<fmin(18.9, 18)<<endl<<endl;
	cout<<"funcion ceil para redondear a una cifra superior: ceil(18.7) = ";
	cout<<ceil(18.7)<<endl<<endl;
	cout<<"funcion floor para redondear a una cifra inferior: floor(18.7) = ";
	cout<<floor(18.7463)<<endl<<endl;
	cout<<"funcion pow para elevar un numero a una potencia: pow(9, 2) = ";
	cout<<pow(9, 2)<<endl<<endl;
	cout<<"funcion sqrt para hallar la raiz cuadrada de un numero: sqrt(81) = ";
	cout<<sqrt(81)<<endl<<endl;
	cout<<"funcion hypot para hallar la hipotenusa de un triangulo: hypot(3, 4) = ";
	cout<<hypot(3, 4)<<endl<<endl;


	system("pause");
	return EXIT_SUCCESS;
}