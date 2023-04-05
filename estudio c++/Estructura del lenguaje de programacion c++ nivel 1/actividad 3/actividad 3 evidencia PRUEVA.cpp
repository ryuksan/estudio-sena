/*aplicación en C++ Parte III. Se dará continuidad al desarrollo de la aplicación para Sofía, la estudiante de la carrera técnica 
en computación. En este caso deberá incluir los temas vistos en la Actividad 3. Ahora, condicionará el porcentaje de utilidad
dependiendo del tipo de zapato que vaya a digitar en el Sistema. Y el precio para el cliente final se establecerá de forma 
automática. Para hacerlo tenga en cuenta lo siguiente:  
1 Si el costo del zapato es menor o igual a $30k el tipo debe establecerse con la letra ‘A’ y el porcentaje de utilidad será del 50%. 
	hecho
2 Si el costo del zapato es mayor a $30k y menor o igual a $60k el tipo del zapato debe establecerse con la letra ‘B’ y el 
porcentaje de utilidad será del 40%.

3 Si el costo del zapato es mayor a $60k el tipo del zapato debe establecerse con la letra ‘C’ y el porcentaje de utilidad será 
del 30%.

Realice dos copias de la aplicación que desarrolló en la Actividad 2 e
incluya las mejoras. En la primera copia trabaje con IF anidados y en la segunda incluya el estatuto SWITCH.*/

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
	char disponibilidad;
	int referencia, talla, cantidad, cantidad_vendida, cantidad_disponible;
	double precio_compra_unidad, precio_compra_total, precio_venta_unidad, precio_venta_total, ganancia_unidad;
	double ganancia_total, porcentaje_ganancia, precio_compra_unidad_1, precio_venta_unidad_1, A, B, C;
	string Tipo;
	int a_b_c;



	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl<<endl;

	cout.imbue(locale(cout.getloc(), new group_facet));
//instrucciones para el usuario 
	cout<<"Dar una descripcion"<<endl;
	cin.getline(descripcion, 30);
	cout<<"Digitar la referencia"<<endl;
	cin>>referencia;
	cout<<"Digitar la talla"<<endl;
	cin>>talla;
	cout<<"Digitar el precio de compra de cada unidad"<<endl;
	cin>>precio_compra_unidad;
	cout<<"digite la cantidad de zapatos que compro"<<endl;
	cin>>cantidad;
	cout<<"cuantos zapatos vendio"<<endl;
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
			a_b_c=1;
		}
			if(precio_compra_unidad>30000 && precio_compra_unidad<=60000)
				{
					a_b_c=2;
				}
					if(precio_compra_unidad>60000)
						{
							a_b_c=3;
						}

		switch(a_b_c)
		{
			case 1:
				Tipo="Tipo A";
				A=precio_compra_unidad*0.50;
				precio_venta_unidad_1=precio_compra_unidad+A;
				break;
					case 2:
						Tipo="Tipo B";
						B=precio_compra_unidad*0.40;
						precio_venta_unidad_1=precio_compra_unidad+B;
						break;
							case 3:
								Tipo="Tipo C";
								C=precio_compra_unidad*0.30;
								precio_venta_unidad_1=precio_compra_unidad+C;
								break;
									default:
										Tipo="";
										break;
	}

	cout<<"El zapato es: "<<endl<< Tipo <<endl<<endl;
	cout<<fixed<<setprecision(2)<< "El precio de compra por unidad es: "<<endl<< precio_compra_unidad <<endl<<endl;
	cout<<fixed<<setprecision(2)<< "El precio venta por unidad es: " <<endl<< precio_venta_unidad_1 <<endl<<endl;
	

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
	
// nombre del creador
	cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}