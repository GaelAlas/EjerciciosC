#include <iostream>
using namespace std;

float Cum(float arregloNota[], float arregloUV[]){
    float cum=0;
    float sumaCum=0;
    float cumTotal=0;
    int uvs=0;
    for(int i=0; i<3; i++){
        cum=arregloNota[i]*arregloUV[i];
        uvs=arregloUV[i]+uvs;
        sumaCum+=cum;
    }
    cumTotal=sumaCum/uvs;

    return cumTotal;
};

struct Persona{
    string nombre;
    int carnet;
    int edad;
    float cum;
};


int main(){
    float notas[3];
    float uv[3];
    string materias[3];
    float cum;
    int cantidad;
    Persona Estudiante[cantidad];
    
    for(int i=0; i<3; i++){
        cout<<"Ingrese la materia "<<i+1<<": "; cin>>materias[i];
        cout<<"Ingrese las unidades valorativas de la materia "<<i+1<<": "; cin>>uv[i];
        cout<<"Ingrese la nota de la materia "<<i+1<<": "; cin>>notas[i];
        
    }

    cum=Cum(notas, uv);

    




    return 0;
}