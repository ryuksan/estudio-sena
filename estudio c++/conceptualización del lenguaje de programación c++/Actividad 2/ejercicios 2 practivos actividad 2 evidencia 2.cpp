/*Como segundo ejercicio usted debe crear una aplicación para hallar la aceleración de un vehículo. Teniendo en cuenta que la formula
 para hallar la aceleración es: 𝑎=(𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑 𝑓𝑖𝑛𝑎𝑙−𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑 𝑖𝑛𝑖𝑐𝑖𝑎𝑙)/𝑡𝑖𝑒𝑚𝑝𝑜
Defina las variables necesarias y solicite al usuario el valor de cada una. Finalmente muestre el resultado en pantalla.*/
#include <iostream>

using namespace std;

int main()
{
    double a, velocidad_inicial, velocidad_final, tiempo;

    cout<<"APLICACION PARA SABER LA ACELERACION DE UN CARRO "<<endl<<endl;

    cout<<"Digite la velocidad inicial en m/s (metros sobre segundos). "<<endl;
    cin>>velocidad_inicial;
    cout<<"Digite la velocidad final en m/s (metros sobre segundos). "<<endl;
    cin>>velocidad_final;
    cout<<"Digite el tiempo en segundos."<<endl;
    cin>>tiempo;

    system("cls");

    cout<<"APLICACION PARA SABER LA ACELERACION DE UN CARRO"<<endl<<endl;

    a=(velocidad_final - velocidad_inicial)/tiempo;

    cout<<"La aceleracion del carro es: "<<a<<" m/s^2"<< endl<<endl;

    cout<<"creado por: wilson sanchez."<<endl<<endl;

    system("pause");
    return EXIT_SUCCESS;
}