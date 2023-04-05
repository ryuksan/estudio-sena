// lectura o entrada de tados 

#include<iostream>

using namespace std;

int main()
{
	int numero;
	float numero_decimal;
	double numero_con_mucho_decimales;
	char cualquier_caracter[30];
	
	cout<<"digite cualquier cosa: "<<endl;
	cin.getline(cualquier_caracter,30);
	
	cout<<"digite un numero entero: "<<endl;
	cin>>numero;
	
	cout<<"digite un numero con dos decimales: "<<endl;
	cin>>numero_decimal;
	
	cout<<"digite un numero con varios decimales: "<<endl;
	cin>>numero_con_mucho_decimales;
	
	
	
	system("cls");
	
	cout<<"El numero que digito es: "<<numero<<endl;
		
	cout<<"El numero que digito es: "<<numero_decimal<<endl;
	
	cout<<"El numero que digito es: "<<numero_con_mucho_decimales<<endl;

	cout<<"Lo que digito es: "<<cualquier_caracter<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}