#include <iostream>

using namespace std;

int main()
{

	int a, b;

	cout<<"digite dis numeros para realizar las operaciones basicas...";
	cout<<endl<<endl<<"digite el primer numero a= "<<endl;
	cin>>a;
	cout<<endl<<"digite el segundo numero b= "<<endl;
	cin>>b;

	cout<<endl<<"el resultado con operadores de asignacion es ...";
	cout<<endl<<endl;
	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es "<< b;
	cout<<endl;
	cout<< a << " += " << b << " = ";
	a+=b;
	cout<< a << endl<<endl;

	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es "<< b;
	cout<<endl;
	cout<< a << " -= " << b << " = ";
	a-=b;
	cout<< a << endl<<endl;

	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es "<< b;
	cout<<endl;
	cout<< a << " *= " << b << " = ";
	a*=b;
	cout<< a << endl<<endl;

	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es "<< b;
	cout<<endl;
	cout<< a << " /= " << b << " = ";
	a/=b;
	cout<< a << endl<<endl;

	cout<<"En este momento 'a' vale "<< a << " y el valor de 'b' es "<< b;
	cout<<endl;
	cout<< a << " %= " << b << " = ";
	a%=b;
	cout<< a << endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}