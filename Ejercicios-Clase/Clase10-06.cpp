#include <iostream>
using namespace std;

struct Estudiante{
    int edad;
    string nombre;
    string carnet;
    char genero;
    string carrera;

};

int main(){
    /*
    Estudiante estudiante1={20,"Juan","00107825",'M',"Informatica"};
    cout<<"Edad: "<<estudiante1.edad<<endl;
    cout<<"Nombre: "<<estudiante1.nombre<<endl;
    cout<<"Carnet: "<<estudiante1.carnet<<endl;
    cout<<"Genero: "<<estudiante1.genero<<endl;
    cout<<"Carrera: "<<estudiante1.carrera<<endl;
    */
   int cantidad;

   cout<<"Ingrese la cantidad de estudiantes"<<endl;
   cin>>cantidad;
   Estudiante estudiantes[cantidad];

   for(int i=0; i<cantidad; i++){
    cout<<"Ingrese la edad del estudiante "<<i+1<<": "; cin>>estudiantes[i].edad;
    cout<<"Ingrese el nombre del estudiante "<<i+1<<": "; cin>>estudiantes[i].nombre;
    cout<<"Ingrese el carnet del estudiante "<<i+1<<": "; cin>>estudiantes[i].carnet;
    cout<<"Ingrese el genero del estudiante "<<i+1<<": "; cin>>estudiantes[i].genero;
    cout<<"Ingrese la carrera del estudiante "<<i+1<<": "; cin>>estudiantes[i].carrera;
    cout<<"-------------------------------------------------------"<<endl;
   }

    for(int i=0; i<cantidad; i++){
        cout<<"----------------------Estudiante "<<i+1<<"----------------------"<<endl;
        cout<<"Nombre del estudiante "<<i+1<<": "<<estudiantes[i].nombre<<endl;
        cout<<"Edad del estudiante "<<i+1<<": "<<estudiantes[i].edad<<endl;
        cout<<"Carnet del estudiante "<<i+1<<": "<<estudiantes[i].carnet<<endl;
        cout<<"Genero del estudiante "<<i+1<<": "<<estudiantes[i].genero<<endl;
        cout<<"Carrera del estudiante "<<i+1<<": "<<estudiantes[i].carrera<<endl;
        cout<<"--------------------------------------------------------"<<endl;

    }

    return 0;
}