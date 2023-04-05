//este es un ejemplo de comentario (comentario de una linea)
/*(se inicia)
este es otro ejemplo de comentario (comentario de una o varias lineas)
*/ //(y se finaliza)
#include <iostream> //#include espara incluir una libreria o cabecera el <iostream> es la libreria correspondiente a entrada y salida de datos  su nombre completo input/output

using namespace std; // uso de std para ahorrar tiempo y no tener que escribir siempre (std::)

int main()// funcion principal que hace posible la ejecucion de un programa de c++.
{// la llave abierta se usa para dar inicio a la funcion main

	int a, b;//creacion de la variable int para un numero entero

	//codigo refenten a la insercion de datos 
	cout << "Ingresa el primer numero"<<endl;//pide al usuario ingresar datos.
	cin >> a;//cin guarda todo los datos que se escriban en el.

	cout << "Ingresa el segundo numero"<<endl;//endl da un enter en la programacion.
	cin >> b;
	//codigo para mostrar los resultados de los datos insertados anterior mente.
	cout <<"La suma de los numeros es: "<< a+b <<endl;// cout es para imprimir en pantalla

	cout <<"La resta de los numeros es: "<< a-b <<endl;//los que esta en ("") es los que el programador escribe para el usuario

	cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;//las variables a,b estan haciendo la funcion con su operador correspondiente

	cout <<"La division de los numeros es: "<< a/b <<endl;// (;) termina cada linea de codigo.

	cout <<"El residuo es: "<< a%b <<endl;// operandos utlizados aqui son +(suma) ,-(resta) ,*(multiplicar) ,/(dividir) ,%(residuo) 


system("pause"); // hace una pausa en la pantalla luego pide dar contuniar para salir del programa
return EXIT_SUCCESS;//devuelve el control al sistema operatico
}// finaliza la funcion main