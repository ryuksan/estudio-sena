#include <iostream>
using namespace std;

int main()
{
    char nombre_apellido[30];
    char sexo;
    int edad;
    
    cout<<"digite su nombre y apellido..."<<endl;
    cin.getline(nombre_apellido, 30);
    cout<<"digite su edad..."<<endl;
    cin>>edad;
    cout<<"digite su sexo M o F..."<<endl;
    cin>>sexo;
    
    system("cls");
    
    cout<<"Su Nombre es: "<< nombre_apellido <<endl;
    cout<<"Su Edad es: "<< edad <<" años" <<endl;
    cout<<"Su Sexo es: "<< sexo << endl <<endl;
    
    system("pause");
    
    return EXIT_SUCCESS;
}
