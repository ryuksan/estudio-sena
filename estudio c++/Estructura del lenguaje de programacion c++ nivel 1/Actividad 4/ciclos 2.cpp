#include <iostream>

using namespace std;

int main()
{
	int contador_notas=1;
	float nota, promedio=0.0, acumulador_nota=0.0;

	while(contador_notas<=5)
	{
		cout<<"Digite la nota "<<contador_notas<<": ";
		cin>>nota;
		acumulador_nota=acumulador_nota+nota;
		contador_notas++;
	}
		promedio=acumulador_nota/5;

	cout<<"El promedio de las notas es: "<<promedio<<endl;

	system("pause");
	return EXIT_SUCCESS;
}