#include <iostream>

using namespace std;

int main()
{
	int edad, hombre=0, mujeres=0, edaddes_gm=0, edades_gf=0;
	char genero;
	float promedio_gm, promedio_gf;

	int i;
	for(i=0;i<=4; i++)
	{
		cout<<"Digite el genero de la persona m/f: ";
		cin>>genero;

		cout<<"Digite la edad de la persona: ";
		cin>>edad;

		if(genero== 'm')
		{
			hombre++;
			edaddes_gm=edaddes_gm+edad;
		}
		else if(genero=='f')
		{
			mujeres++;
			edades_gf=edades_gf+edad;
		}
	}

	cout<<"Total de hombres: "<<hombre<<endl;
	cout<<"Total promedio de edades de hombres: "<<edaddes_gm/hombre<<endl;

	cout<<"Total de mujeres: "<<mujeres<<endl;
	cout<<"Total promedio de edades de mujeres: "<<edades_gf/mujeres<<endl;

	system("pause");
	return EXIT_SUCCESS;
}