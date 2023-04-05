#include <iostream>
using namespace std;
int main()
{
	float nota;
	cout<<"Digitar calificacion"<<endl;
	cin>>nota;

	//si la nota es mayor que cero y menor que 5 es valida
	//si no, entonces generar error
	if(nota>0.0 && nota<5.0)
	{
		if(nota<3)
		{
			cout<<"Has REPROBADO la materia."<<endl<<endl;
		}
		else if(nota>=3)
		{
			cout<<"Has APROBADO la materia."<<endl<<endl;
		}
	}
	else
	{
		cout<<"La calificacion Digitada no es valida."<<endl<<endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}