//Pide un número entre 1 y 10. Si el usuario ingresa un valor fuera de ese 
//rango,  volver a intentarlo hasta que lo haga correctamente.
#include <iostream>
using namespace std;

int main(){
    int numero=0;
    do{
        cout<<"Ingresa un numero entre 1 y 10"<<endl;
        cin>>numero;
    }
    while(numero<1 || numero >10);

    return 0;
}