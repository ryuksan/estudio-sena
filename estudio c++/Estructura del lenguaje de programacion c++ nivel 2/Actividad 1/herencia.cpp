/*En el siguiente ejemplo se observa la aplicación de la herencia en C++ a través de la creación de un programa con una superclase llamada Persona,
que tiene una clase hija llamada Empleado. Se debe digitar el código en el Dev-C++ para continuar con la práctica del lenguaje.
A continuación, se explican los apartes del código donde se realiza la creación de la clase padre (Persona) y el proceso de herencia en la clase hija (Empleado).*/
#include <iostream>
#include <stdlib.h>
using namespace std;
/*Clase padre "Persona"
Entre las líneas 5 y 12 se crea la clase Persona con sus respectivos atributos y métodos,
dicha creación se realiza del mismo modo en que fue explicado para la figura Inicialización del constructor en el ejemplo 1*/
class Persona {
  private:
    string nombre;
    int edad;
  public:
    Persona(string,int);
    void verPersona();
};
/*Clase hija "Empleado"
En la línea 14 se define la clase Empleado y para indicar que es una clase hija; es decir, que hereda de la clase Persona, se escriben los dos puntos,
la palabra public y el nombre de la clase padre.  En este caso el public significa que la clase Empleado puede manipular todos los elementos públicos de
la clase Persona. En las líneas 16 y 17 se declaran los atributos propios de la clase Empleado. En la línea 19 se declara el constructor de la clase Empleado
donde se inicializan tanto los atributos heredados (nombre y edad) como los atributos propios (cargo y salario). Se debe conservar el orden de ocurrencia de
dichos atributos; es decir, incluir primero los de la clase padre y luego los de la clase hija. En la línea 20 se incluye un método llamado verEmpleado()
propio de la clase Empleado; por lo tanto, dicha clase tiene un método propio llamado verEmpleado() y un método heredado llamado verPersona();*/
class Empleado : public Persona{
  private: 
    string cargo;
    float salario;
  public:
    Empleado(string,int,string,float);
    void verEmpleado();
};
/*Inicialización del constructor de la clase "Persona"
Entre las líneas 23 y 26 se inicializa el constructor de la clase Persona; lo cual  se realiza del mismo modo en que fue explicado para la figura
Inicialización del constructor en el ejemplo 1.*/
Persona::Persona(string elNombre,int laEdad){
  nombre = elNombre;
  edad = laEdad;
}
/*Inicialización del constructor de la clase "Empleado"
En la línea 28 se inicializa el constructor, para lo cual debe indicarse el nombre (Empleado) y de qué tipo es (Empleado) y a continuación entre paréntesis
los datos que recibe con su respectivo tipo. Teniendo en cuenta que esta es la clase hija, deben incluirse tanto los atributos heredados como los propios;
sin embargo, los datos de los atributos heredados ya fueron indicados, razón por la cual deben ponerse al final los dos puntos (:), el nombre de la clase padre
y los atributos inicializados en el constructor de dicha clase. En las líneas 29 y 30 se indica que el cargo y el salario (atributos propios de la clase hija
Empleado) deben ser iguales a las nuevas variables que serán ingresadas cuando se cree el objeto.*/
Empleado::Empleado(string elNombre,int laEdad,string elCargo,float elSalario) : Persona(elNombre,laEdad){
  cargo = elCargo;
  salario = elSalario;
}
/*Creación de métodos clases "Empleado y Persona"
Entre las líneas 33 y 37 se crea el método verEmpleado(), cuyo objetivo consiste en mostrar toda la información del empleado y teniendo en cuenta que
Empleado  es la clase hija, hereda el método verPersona() de la clase padre; por lo tanto, la primera instrucción de dicho método consiste en invocar
el método verPersona, lo cual mostrará el nombre y la edad, de modo que solo resta incluir las instrucciones que muestren el cargo y el salario, lo
cual se realiza en las líneas 35 y 36. Entre las líneas 39 y 41 se crea el método verPersona() que se encarga de mostrar el nombre y la edad. */
void Empleado::verEmpleado(){
  verPersona();
  cout<<"Cargo: "<<cargo<<endl;
  cout<<"Salario: "<<salario<<endl;
}

void Persona::verPersona(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Edad: "<<edad<<endl;
}
/*Creación de objeto como instancia de la clase "Empleado"
En la línea 45 se crea el objeto llamado empleado1 de la clase Empleado inicializando tanto los atributos heredados como los propios con los valores
nombre Camila Soto, edad 19, cargo Recepcionista y salario 890000. En la línea 47 se indica al objeto empleado1 que ejecute el método verEmpleado().*/
int main(){
  Empleado empleado1 = Empleado("Camila Soto",19,"Recepcionista",890000);
  empleado1.verEmpleado();
  system("pause");
  return 0;
}