//Pide tres lados de un triángulo e indica si es equilátero, isósceles o escaleno.
#include <iostream>
using namespace std;

int main(){
    float lado1=0, lado2=0, lado3=0;

    cout<<"Ingrese el lado 1 del triangulo:"<<endl;
    cin>>lado1;
    cout<<"Ingrese el lado 2:"<<endl;
    cin>>lado2;
    cout<<"Ingrese el lado 3:"<<endl;
    cin>>lado3;

    //Evaluando el tipo de triangulo

    //Triangulo equilatero
    if(lado1==60 && lado2==60 && lado3==60){
        cout<<"El triangulo es equilatero"<<endl;
    }
    //Trianguo isoceles
    else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        cout<<"El trianguo es isoceles"<<endl;
    }
    //Triangulo escaleno
    else{
        cout<<"El triangulo es escaleno";
    }

    return 0;
}