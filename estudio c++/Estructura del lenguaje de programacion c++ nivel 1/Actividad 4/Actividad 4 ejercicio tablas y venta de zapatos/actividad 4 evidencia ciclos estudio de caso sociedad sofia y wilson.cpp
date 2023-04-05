/*while*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

struct group_facet: public std::numpunct<char> {
	protected:
	string do_grouping() const{ return "\003"; }
};



int main()
{
	
	char descripcion[30];
	char disponibilidad[2],continuar;
	int referencia, talla, cantidad, cantidad_vendida, cantidad_disponible;
	double precio_compra_unidad, precio_compra_total, precio_venta_unidad, precio_venta_total, ganancia_unidad;
	double ganancia_total, porcentaje_ganancia, precio_compra_unidad_1, precio_venta_unidad_1, A, B, C;



	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl<<endl;

	cout.imbue(locale(cout.getloc(), new group_facet));
//instrucciones para el usuario 
		cout<<"Desea Registrar un zapato? s (si) o cualquier tecla para salir: \n";
		cin>>continuar;


	if(continuar!='s')
	{
		cout<<"USTED NO DESEA DIGITAR UN ZAPATO"<<endl<<endl;
		cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
		system("pause");
		return EXIT_SUCCESS;
	}
	if(continuar=='s')
	{
	while(continuar == 's')
		{
			cout<<"Dar una descripcion \n";
			cin.ignore(256, '\n');
			cin.getline(descripcion, 30);
			cout<<"Digitar la referencia\n";
			cin>>referencia;
			cout<<"Digitar la talla\n";
			cin>>talla;
			cout<<"Digitar el precio de compra de cada unidad\n";
			cin>>precio_compra_unidad;
			cout<<"Cuantos zapatos que compro\n";
			cin>>cantidad;
			cout<<"Cuantos zapatos vendio\n";
			cin>>cantidad_vendida;

//impresion en la pantalla

	system("cls");

	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl<<endl;
	
	cout<<"LOS DATOS QUE REGISTRO FUERON LOS SIGUIENTE:"<<endl<<endl;

	if(cantidad<cantidad_vendida)
		{
			cout<<"HAY UN ERROR EN LA DIGITACION POR FAVOR VUELVA A DIGITAR LOS DATOS."<<endl<<endl;
			// nombre del creador
			cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
			system("pause");
			return EXIT_SUCCESS;
		}

	cout<<"La Descripcion es: "<<endl<< descripcion <<endl<<endl;

	cout<<"La referencia es: "<<endl<< referencia <<endl<<endl;

	cout<<"La Talla es: "<<endl<<talla<<endl<<endl;

	

	precio_compra_total = precio_compra_unidad * cantidad;

	if(precio_compra_unidad<=30000)
		{
			cout<<"El zapato es: "<<endl<<"Tipo A"<<endl<<endl;
			cout<<fixed<<setprecision(2)<< "El precio de compra por unidad es: "<<endl<< precio_compra_unidad <<endl<<endl;
			A=precio_compra_unidad*0.50;
			precio_venta_unidad_1=precio_compra_unidad+A;
			cout<<fixed<<setprecision(2)<< "El precio venta por unidad es: " <<endl<< precio_venta_unidad_1 <<endl<<endl;
		}
			if(precio_compra_unidad>30000 && precio_compra_unidad<=60000)
				{
					cout<<"El zapato es: "<<endl<<"Tipo B"<<endl<<endl;
					cout<<fixed<<setprecision(2)<< "El precio de compra por unidad es: "<<endl<< precio_compra_unidad <<endl<<endl;
					B=precio_compra_unidad*0.40;
					precio_venta_unidad_1=precio_compra_unidad+B;
					cout<<fixed<<setprecision(2)<< "El precio venta por unidad es: " <<endl<< precio_venta_unidad_1 <<endl<<endl;
				}
					if(precio_compra_unidad>60000)
						{
							cout<<"El zapato es: "<<endl<<"Tipo C"<<endl<<endl;
							cout<<fixed<<setprecision(2)<< "El precio de compra por unidad es: "<<endl<< precio_compra_unidad <<endl<<endl;
							C=precio_compra_unidad*0.30;
							precio_venta_unidad_1=precio_compra_unidad+C;
							cout<<fixed<<setprecision(2)<< "El precio venta por unidad es: " <<endl<< precio_venta_unidad_1 <<endl<<endl;
						}

	precio_venta_total=precio_venta_unidad_1*cantidad_vendida;
	ganancia_unidad = precio_venta_unidad_1 - precio_compra_unidad;
	ganancia_total = precio_venta_total - precio_compra_total;
	porcentaje_ganancia = (ganancia_total * 100) / precio_compra_total ;
	cantidad_disponible=cantidad - cantidad_vendida;	

	cout<<fixed<<setprecision(2)<< "El precio de compra total por "<<cantidad<<" unidades compradas es: "<<endl<<precio_compra_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El precio de venta total por "<<cantidad_vendida<<" unidades vendidas es: "<<endl<<precio_venta_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "La ganancia por unidad es: "<<endl<<ganancia_unidad <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "La ganancia total por "<<cantidad<< " unidades compradas y "<<cantidad_vendida<< " unidades vendidas es: "<<endl<<ganancia_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El porcentaje de ganancia por "<<cantidad<<" unidades compradas y "<<cantidad_vendida<<" unidades vendidas es: "<<endl<<porcentaje_ganancia <<"%"<<endl<<endl;
	

	
if(cantidad==cantidad_vendida)
	{
		cout<<"No tiene disponibilidad."<<endl<<endl;
	}
		if(cantidad>cantidad_vendida)
			{
				cout<<"SI tiene disponibilidad. Hay "<< cantidad_disponible<< " unidades" <<endl<<endl;							
			}	

			cout<<"Si Desea Registrar otro zapato digite 's' de lo contrario digite cualquier tecla para salir del programa:";
		cin>>continuar;
		if(continuar!='s')
	{
		cout<<endl;
		cout<<"USTED NO DESEA REGISTRAR OTRO ZAPATO"<<endl<<endl;
	}
		}
	}
	
// nombre del creador
		cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}