/*Escribe un programa que pida la edad de una persona e indique 
si es mayor o menor de edad (18 años o más es mayor de edad).*/

#include <iostream>
using namespace std;

int main(){
    int edad;

    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    
    if(edad>18){
        cout<<"Usted es mayor de edad"<<endl;
    }else{
        cout<<"Usted es menor de edad"<<endl;
    }


    return 0;
}