#include <iostream>
using namespace std;
int main()
{
	int dia;
	string nombre_dia;
	cout<<"digitar un dia de la semana para determinar su nombre: "<<endl<<endl;
	cin>>dia;

	switch(dia)
	{
		case 1:
			nombre_dia="domingo";
			break;
		case 2:
			nombre_dia="lunes";
			break;
		case 3:
			nombre_dia="martes";
			break;
		case 4:
			nombre_dia="miercoles";
			break;
		case 5:
			nombre_dia="jueves";
			break;
		case 6:
			nombre_dia="viernes";
			break;
		case 7:
			nombre_dia="sabado";
			break;
		default:
			nombre_dia="";
				break;
	}
	if(nombre_dia != "")
	{
		cout<<"el dia es: "<<nombre_dia<<endl<<endl;
	}
	else
	{
		cout<<"el numero digitado no corresponde a dias de la semana"<<endl<<endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}