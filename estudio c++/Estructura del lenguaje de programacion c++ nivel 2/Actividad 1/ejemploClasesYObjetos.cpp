/*En el siguiente ejemplo se observa la creación de una clase con sus atributos y métodos en
C++; así como también la instanciación de la misma a través de la creación de dos objetos
a partir de ella. Se recomienda digitar el código en el Dev-C++ para continuar con la
práctica del lenguaje.
A continuación, se explican los apartes del código donde se realiza la creación de la clase,
se instancia y se ejecutan los métodos.*/
#include <iostream>
#include <stdlib.h>
using namespace std;
/*Creación de la clase
En la línea 5 se da el nombre a la clase y se abre llave para incluir sus atributos y
métodos.
En la línea 6 se indica que los elementos declarados a continuación son privados y éstos
van a ser los atributos de la clase.
En las líneas 7,8 y 9 se declaran los atributos de la clase que son: cédula, nombre y
teléfono de tipo string.
En la línea 10 se indica que los elementos declarados a continuación son públicos y estos
van a ser los métodos de la clase.
En la línea 11 se indica el método constructor de la clase que sirve para inicializar las
variables, debe tener el mismo nombre de la clase y entre paréntesis los tipos de los
datos a inicializar.
En las líneas 12 y 13 se indican los métodos comprar y alquilar de la clase.
En la línea 14 se cierra la llave y se pone el punto y coma (;).*/
class Cliente {
  private: 
    string cedula;
    string nombre;
    string telefono;
  public:
    Cliente(string, string, string);
    void comprar();
    void alquilar();
};
/*Inicialización del constructor
En la línea 16 se inicializa el constructor para lo cual debe indicarse el nombre (Cliente) y
de qué tipo es (Cliente) y a continuación entre paréntesis los datos que recibe con su
respectivo tipo, usualmente se utiliza un nombre diferente al que se dio a las variables.
En las líneas 17, 18 y 19 se indica que la cédula, el nombre y el teléfono deben ser iguales
a las nuevas variables que serán ingresadas cuando se cree el objeto.*/
Cliente::Cliente(string laCedula, string elNombre, string elTelefono){
  cedula = laCedula;
  nombre = elNombre;
  telefono = elTelefono;
}
/*Creación de métodos
Entre las líneas 22 y 24 se crea el método comprar, lo primero que debe hacerse es
indicar de que tipo es (void), de qué clase (Cliente), posteriormente el nombre del
método (comprar) y entre las llaves se incluyen las instrucciones que determinan qué es
exactamente lo que el método debe realizar; para el ejemplo se muestra un texto en
pantalla que incluye una de las variables.
Entre las líneas 26 y 29 se realiza lo mismo que en el paso anterior, para el método
alquilar, que también es de tipo void y de la clase Cliente. Dentro de las instrucciones se
indica que imprima dos líneas de texto donde además se observan algunas de las
variables.
Es importante en la creación de los métodos indicar a qué clase pertenecen, ya que los
programas contienen múltiples clases y en varias de ellas puede haber métodos con el
mismo nombre.*/
void Cliente::comprar(){
  cout<< "El cliente " <<nombre<< " ha comprado un videojuego"<<endl;
}
void Cliente::alquilar(){
  cout<< "Videojuego alquilado a " << nombre << " con documento " <<cedula<<endl;
  cout<< "En caso de demoras en la entrega llamar al " <<telefono<<endl;
}
/*Creación de objetos
En la línea 32 se crea el objeto llamado cliente1 de la clase Cliente inicializado con los
valores cédula 10278548, nombre Luis Hurtado y teléfono 2156478524.
En la línea 33 se crea el objeto llamado cliente2 de la clase Cliente inicializado con los
valores cédula 24342548, nombre Andrea Moreno y teléfono 2627788.
En las líneas 35 y 36 se indica a los objetos cliente1 y cliente2 que ejecuten los métodos
alquilar y comprar, respectivamente.*/
int main(){
  Cliente cliente1 = Cliente("10278548", "Luis Hurtado", "3156478524");
  Cliente cliente2 = Cliente("24342548", "Andrea Moreno", "2627788");

  cliente1.alquilar();
  cliente2.comprar();
  system("pause");
  return 0;
}