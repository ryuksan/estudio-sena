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
	int referencia, talla, cantidad, cantidad_vendida;
	double precio_compra_unidad, precio_compra_total, precio_venta_unidad, precio_venta_total, ganancia_unidad;
	double ganancia_total, porcentaje_ganancia;



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
	cout<<"Digitar el precio de venta de cada unidad"<<endl;
	cin>>precio_venta_unidad;
	cout<<"cuantos zapatos vendio"<<endl;
	cin>>cantidad_vendida;
	cout<<"El producto tiene disponibilidad s(si)/n(no)"<<endl;
	cin>>disponibilidad;

//procedimientos para los calculos necesarios

	precio_compra_total = precio_compra_unidad * cantidad;
	precio_venta_total = precio_venta_unidad * cantidad_vendida;
	ganancia_unidad = precio_venta_unidad - precio_compra_unidad;
	ganancia_total = precio_venta_total - precio_compra_total;
	porcentaje_ganancia = (ganancia_total * 100) / precio_compra_total ;

	
//impresion en la pantalla

	system("cls");

	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl<<endl;
	
	cout<<"LOS DATOS QUE REGISTRO FUERON LOS SIGUIENTE:"<<endl<<endl;
	

	cout<<"La Descripcion es: "<<endl<< descripcion <<endl<<endl;

	cout<<"La referencia es: "<<endl<< referencia <<endl<<endl;

	cout<<"La Talla es: "<<endl<<talla<<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El precio de compra por unidad es: "<<endl<< precio_compra_unidad <<endl<<endl;	

	cout<<fixed<<setprecision(2)<< "El precio venta por unidad es: " <<endl<< precio_venta_unidad <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El precio de compra total por "<<cantidad<<" unidades compradas es: "<<endl<<precio_compra_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El precio de venta total por "<<cantidad_vendida<<" unidades vendidas es: "<<endl<<precio_venta_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "La ganancia por unidad es: "<<endl<<ganancia_unidad <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "La ganancia total por "<<cantidad<< " unidades compradas y "<<cantidad_vendida<< " unidades vendidas es: "<<endl<<ganancia_total <<endl<<endl;

	cout<<fixed<<setprecision(2)<< "El porcentaje de ganancia por "<<cantidad<<" unidades compradas y "<<cantidad_vendida<<" unidades vendidas es: "<<endl<<porcentaje_ganancia <<"%"<<endl<<endl;
	
	cout<<"El producto tiene disponibilidad? s(si)/n(no): "<<endl<< disponibilidad<<endl<<endl;
	
	
	
// nombre del creador
	cout<<"CREADO POR: Wilson Sanchez Futuro Programador"<<endl<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}