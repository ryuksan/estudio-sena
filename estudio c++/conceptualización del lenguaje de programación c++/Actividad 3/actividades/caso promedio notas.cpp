/*En una institución educativa, el profesor de la clase de tecnología requiere desarrollar una aplicación que calcule el promedio
de las notas de sus estudiantes y determine si aprobaron o no aprobaron la materia. Es de tener en cuenta que el profesor a sacado
4 notas y que el promedio para aprobar debe estar entre 3.5 y 5.0 puntos. A través de una condición anidada pregunte si la nota
está entre 3 y 3.5. Si es así, el estudiante tiene una oportunidad de recuperar y el mensaje a imprimir será el siguiente:
“En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar.”. Si la nota está por debajo
de 3 el mensaje será “No aprobado” y si la nota está por encima de 3.5 el mensaje a imprimir será “Aprobado”.
Para el desarrollo de la aplicación tenga en cuenta lo siguiente:
 Defina variables del tipo float para poder hacer los cálculos y tener como resultado una parte decimal.
 El usuario debe digitar 4 notas y con base a ellas calcular el promedio.
 Al finalizar digite su nombre y apellidos como un comentario en el código del*/

#include <iostream>

using namespace std;

int main()
{
	int contador_nota=1, cantidad_notas, caso;
	double nota, promedio=0.0, acumulador_nota=0.0;
	string final;
	char continuar;

	cout<<"APLICACION PARA SABER EL PROMEDIO Y SI FUE APROVADO"<<endl<<endl;

	do
	{
		cout<<"Desea Registrar nuevas notas? s (si) o cualquier tecla para salir: \n";
		cin>>continuar;


	if(continuar!='s')
	{
		cout<<endl;
		cout<<"USTED NO DESEA REGISTRAR NUEVAS NOTAS"<<endl<<endl;
		cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
		system("pause");
		return EXIT_SUCCESS;
	}

	cout<<"Digite la cantidad de notas que desea promediar"<<endl;
	cin>>cantidad_notas;

	while(contador_nota<=cantidad_notas)
	{
		cout<<"Digite la nota # "<<contador_nota<<" de "<<cantidad_notas<<" : "<<endl;
		cin>>nota;
		acumulador_nota=acumulador_nota+nota;
		contador_nota++;
		
		if(nota<0.0)
				{
					cout<<"Oe parcero que hace DIGITO ALGO MAL las notas no deben ser menores de 0.0"<<endl<<endl;
					cout<<"Creado Por: Wilson Sanchez Fututo Programador"<<endl<<endl;
					system("pause");
					return EXIT_SUCCESS;
				}
		if(nota>5.0)
		{
			cout<<"Oe parcero que hace DIGITO MAL las notas no deben ser mayores de 5.0"<<endl<<endl;
					cout<<"Creado Por: Wilson Sanchez Fututo Programador"<<endl<<endl;
					system("pause");
					return EXIT_SUCCESS;

		}
	}
	promedio=acumulador_nota/cantidad_notas;

	if(promedio>0.0 && promedio<=3.0)
	{
		caso=1;
	}
		if(promedio>3.0 && promedio<=3.5)
		{
			caso=2;
		}
			if(promedio>3.5 && promedio<=5.0)
			{
				caso=3;
			}

switch(caso)
{
	case 1:
	final="Usted no APROVO";
	break;
	case 2:
	final="Usted no APROVO pero puede recuperar";
	break;
	case 3:
	final="Usted fue APROVADO FELICIDADES";
	break;
	default:
	final="";
	break;
}
		
		system("cls");
		cout<<"APLICACION PARA SABER EL PROMEDIO Y SI FUE APROVADO"<<endl<<endl;


		cout<<"El promedio de las notas es: "<<promedio<<" "<<final<<endl<<endl;

}
while(continuar == 's');

		cout<<"Creado Por: Wilson Sanchez Fututo Programador"<<endl<<endl;


	system("pause");
	return EXIT_SUCCESS;
}