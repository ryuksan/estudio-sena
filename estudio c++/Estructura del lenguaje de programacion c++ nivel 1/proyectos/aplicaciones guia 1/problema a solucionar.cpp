#include <iostream> //#include espara incluir una libreria o cabecera el <iostream> es la libreria correspondiente a entrada y salida de datos  su nombre completo input/output


/* Sofía es estudiante de una carrera técnica en sistemas de computación y requiere 
un ingreso extra para amortiguar sus gastos personales. Ella se ha encontrado con una
oportunidad en Internet donde le ofrecen zapatos al por mayor y a un buen precio. Ella 
decide desarrollar una aplicación en el lenguaje C++ que le ofrezca realizar cálculos para 
determinar costos, margen de ganancias y proyectar sus ventas. En este programa a 
desarrollar, desempeñará el rol de compañero (a) y socio (a) de Sofía y le ayudará con su 
propósito.
 
 
Para esta primera etapa, se deberá definir las variables que necesita la aplicación y hará
una prueba relacionada con el ingreso y la salida de datos unicamente.
*/
using namespace std; // uso de std para ahorrar tiempo y no tener que escribir siempre (std::)


int main() // funcion principal que hace posible la ejecucion de un programa de c++.
{ // la llave abierta se usa para dar inicio a la funcion main
	
	char descripcion[30]; 	//creacion de la variable la variable char permite el almacenamiento de cualquier caractar el numero entre corchetes es para definir su dimencion 
	int referencia;		//creacion de la variable int para un numero entero
	int talla;
	int precio_compra;
	int precio_venta;
	char disponibilidad;



	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl; //nombre de la empresa o aplicacion que se esta creando.
	cout<<" "<<endl; 	// espaciado para dar mejor visualizacion.

//codigo refenten a la insercion de datos 
	cout<<"Dar una descripcion"<<endl;		 //pide al usuario ingresar datos.
	cin.getline(descripcion, 30);		// para recibir de forma completa lo que digito el usuario se usa la funcion getline() ya que si solo se usa la funcion cin solo guarda hasta el siguiente espacio.
	cout<<"Digitar la referencia"<<endl;
	cin>>referencia;		//guarda los datos que le pidio al usuario en la variable correspondiente.
	cout<<"Digitar la talla"<<endl; //la palabra cout va a imprimir en la pantalla todo lo que escriba dentro de el.
	cin>>talla;
	cout<<"Digitar el precio de compra"<<endl; //endl da un enter en la programacion.
	cin>>precio_compra;			//cin guarda todo los datos que se escriban en el.
	cout<<"Digitar el precio de venta"<<endl;
	cin>>precio_venta;
	cout<<"El producto tiene disponibilidad s/n"<<endl;
	cin>>disponibilidad;


	
//codigo para mostrar los resultados de los datos insertados anterior mente.

	system("cls"); //sentencia que indica limpiar pantalla.

	cout<<"ADMINISTRACION DE LA SOCIEDAD SOFIA Y WILSON"<<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"LOS DATOS QUE REGISTRO FUERON LOS SIGUIENTE:"<<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"La Descripcion es: "<< descripcion <<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"La referencia es: "<< referencia <<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"La Talla es: "<<talla<<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"El precio de compra es: "<< precio_compra <<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"El precio venta es: "<< precio_venta<<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.

	cout<<"El producto tiene disponibilidad? s/n (s:si/n:no): "<<disponibilidad<<endl;
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.
	
	
// nombre del creador
	cout<<"CREADO POR: Wilson Arvey Sanchez Remolina "<<endl;	
	cout<<" "<<endl;	// espaciado para dar mejor visualizacion.



	
	system("pause"); //obliga al sistema a mantener la cosola abierta hasta que se oprima una tecla.
	return EXIT_SUCCESS; //devuelve el control al sistema operativo y confirma que la aplicacion finalizo correctamente.
} // la llave cerrada se usa para dar fin a la funcion main.
