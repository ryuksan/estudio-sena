/*Realice una aplicación en C++ que le pregunte al usuario la edad de su hijo. Si el niño tiene entre 0 y 6 años el programa debe
imprimir que el niño pertenece al grupo de la primera infancia. Si la edad está entre los 6 y los 12 años el programa debe imprimir
que el niño pertenece al grupo de la segunda infancia; y en caso de que el niño tenga entre 12 y 18 años el mensaje impreso dirá que
pertenece al grupo de los adolescentes.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int edad;

	cout<<"APLICACION PARA SABER A QUE GRUPO PERTENECE SU HIJO"<<endl<<endl;
	setlocale(LC_CTYPE, "español");

	cout<<"Digite la edad de su hijo?"<<endl;
	cin>>edad;

	system("cls");

	cout<<"APLICACION PARA SABER A QUE GRUPO PERTENECE SU HIJO"<<endl<<endl;

	if(edad>0 && edad<=6)
	{
		

		cout<<"Su hijo tiene "<<edad<<" a"<<char(164) <<"os de edad y pertenece al grupo de la primera infancia"<<endl<<endl;
	}
		
		if(edad>6 && edad<=12)		
		{
			cout<<"Su hijo tiene "<<edad<<" a"<<char(164) <<"os de edad y pertenece al grupo de la segunda infancia"<<endl<<endl;
		}
			if(edad>12 && edad<=18)
			{
				cout<<"Su hijo tiene "<<edad<<" a"<<char(164) <<"os de edad y pertenece al grupo de los adolecentes"<<endl<<endl;
			}
					if(edad>18)
				{
					cout<<"Su hijo tiene " <<edad << " a" <<char(159)<< "os de edad ya es un adulto es hora que lo deje por su cuenta "<<endl;
					cout<<"para que aprenda a ser un adulto y no sea una carga para la sociedad claro siempre dandole"<<endl;
					cout<<"consejos para que sea una gran persona recomendacion del creador de este programa"<<endl<<endl;
				}
	

			cout<<"Creado por: Wilson Sanchez futuro programador"<<endl<<endl;

	system("pause");
	return EXIT_SUCCESS;
}
//profesor se que el desarrollo de esta activdad era sin anidar los estatutos pero era mucho mas facil la creacion
//de este progrema y pues la estructura del if nomal seria asi:

/*if(num1<num2)
	{
	cout<<"el numero dos es mayor que el numero 1"<<endl;
	}
	else
	{
	cout<<"el numero 1 es mayor que el numero dos"<<endl;
	}
	*/