#include <iostream>

using namespace std;

int main()
{
	int numero, resultado=0;

	cout<<"digite un numero para hallar los multiplos: "<<endl;
	cin>>numero;
	cout<<"Los multiplos de "<<numero<<" son: "<<endl;

	while(resultado<100)
	{
		resultado=resultado+numero;
		cout<<resultado<<endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}