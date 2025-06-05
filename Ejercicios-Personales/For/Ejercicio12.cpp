//Pide dos números base y 
//exponente, y calcula base^exponente sin usar la función pow().
#include <iostream>
using namespace std;
 int main(){
    int base=0, exponente=0, total=0;

    cout<<"Ingrese un numero base:"<<endl;
    cin>>base;
    cout<<"Ingrese un exponente:"<<endl;
    cin>>exponente;

    total=base;
    for(int i=1; i<exponente;i++){
        total=base*total;
    }

    cout<<"El numero base "<<base<<", con exponente "<<exponente<<" da como resultado: "<<total;

    return 0;
 }