#include <iostream>

using namespace std;

int main()
{
	int contador_notas=1;
	float nota, promedio=0.0, acumulador_notas=0.0;

	do
	{
		cout<<"digite la nota "<<contador_notas<<" : ";
		cin>>nota;
		acumulador_notas=acumulador_notas+nota;
		contador_notas++;
	}
	while(contador_notas<=5);
		promedio=acumulador_notas/5;

	cout<<"El promedio de las notas es: "<<promedio<<endl;


	system("pause");
	return EXIT_SUCCESS;
}