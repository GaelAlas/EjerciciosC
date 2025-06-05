#include <iostream>
using namespace std;

int main(){
    int horas,salario,preciohora=3;
    string nombre, condicion;

    cout<<"Ingrese el nombre"<<endl;
    cin>>nombre;
    cout<<"\nIngrese las horas trabajadas"<<endl;
    cin>>horas;

    if(horas<44){
        salario=horas*preciohora;

    }
    else{
        salario=44 * preciohora + 1.5 * preciohora * (horas-44);
    }

    cout<<nombre<<" tu salario es: \n"<<salario<<endl;
    cout<<"Deseas ingresar más datos? (S/N)"<<endl;
    cin>>condicion;

    while(condicion=="S" || condicion=="s"){

    cout<<"\nIngrese el nombre"<<endl;
    cin>>nombre;
    cout<<"\nIngrese las horas trabajadas"<<endl;
    cin>>horas;

    if(horas<44){
        salario=horas*preciohora;

    }
    else{
        salario=44 * preciohora + 1.5 * preciohora * (horas-44);
    }

    cout<<nombre<<" tu salario es: \n"<<salario<<endl;
    cout<<"Deseas ingresar más datos? (S/N)"<<endl;
    cin>>condicion;
    }


    return 0;
}