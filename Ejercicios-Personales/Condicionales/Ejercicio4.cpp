//Solicita una calificación numérica y muestra si el estudiante 
//aprobó o reprobó (mínimo aprobatorio: 60).

#include <iostream>
using namespace std;

int main(){
    int calificacion=0;
    
    cout<<"Ingrese una calificacion: "<<endl;
    cin>>calificacion;

    if(calificacion>60){
        cout<<"Has aprobado"<<endl;
    }else{
        cout<<"Has reprobado"<<endl;
    }


    return 0;
}