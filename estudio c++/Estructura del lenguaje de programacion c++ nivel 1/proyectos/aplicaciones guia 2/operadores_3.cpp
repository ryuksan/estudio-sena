#include <iostream>

using namespace std;

int main()
{
	float lado_1, lado_2, base_mayor, base_menor, perimetro;

	cout<<"programa para hallar el perimetro de un trapcio..."<<endl<<endl;
	cout<<"digite el lado 1: "<<endl;
	cin>>lado_1;
	cout<<endl;

	cout<<"digite el lado 2: "<<endl;
	cin>>lado_2;
	cout<<endl;

	cout<<"digite la base mayor: "<<endl;
	cin>>base_mayor;
	cout<<endl;

	cout<<"digite la base menor: "<<endl;
	cin>>base_menor;
	cout<<endl;

	perimetro=lado_1+lado_2+base_mayor+base_menor;

	cout<<"El perimetro del trapcio es: "<<perimetro<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}