#include <iostream>

using namespace std;

int main()
{
	int n1, n2;

	cout<<"Digita el primer Numero: "<<endl;
	cin>>n1;
	cout<<"Digita el segundo Numero: "<<endl;
	cin>>n2;

	if(n1 > n2)
	{
	cout<<"El primer Numero es mayor que el segundo: "<<endl<<endl;
	}
	
	else if(n1==n2)
	{
		cout<<"Los dos Numero son iguales: "<<endl<<endl;
	}
	else
	{
		 cout<<"El segundo Numero es mayor que el primero: "<<endl<<endl;
	}
	
	


	system("pause");
	return EXIT_SUCCESS;
}