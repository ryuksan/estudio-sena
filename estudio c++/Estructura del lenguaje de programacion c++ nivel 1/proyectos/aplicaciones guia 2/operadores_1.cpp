#include <iostream>

using namespace std;

int main()
{
	int a, b, suma, resta, mult, div, mod, resultado;

	cout<<" digite Dos numeros para realizar las operaciones basicas..." ;
	cout<<endl<<endl<<" digite el primer numero a= "<<endl;
	cin>>a;
	cout<<endl<<" digite el segundo numero b= "<<endl;
	cin>>b;

	suma = a + b;
	resta = a - b;
	mult = a * b;
	div = a / b;
	mod = a % b;

	cout<<endl<<" EL RESULTADO con operadores aritmeticos es...";
	cout<<endl<<endl;

	cout<< a << "+" << b << "=" << suma << endl;
	cout<< a << "-" << b << "=" << resta << endl;
	cout<< a << "*" << b << "=" << mult << endl;
	cout<< a << "/" << b << "=" << div << endl;
	cout<< a << "%" << b << "=" << mod << endl;

	system("pause");
	return EXIT_SUCCESS;




}