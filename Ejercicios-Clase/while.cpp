#include <iostream>
using namespace std;

int main(){
    int numero1, suma;
    int arreglo[10];

    while(numero1>=0){
        
        
        cout<<"Ingrese un numero"<<endl;
        cin>>numero1;

        if(numero1>=0 ){
        for(int i=0; i<10; i++){
            arreglo[i]=numero1;
        }
        }
        else{
        
        }

    }
    for(int i=0; i<4; i++){
            suma=suma+arreglo[i];
    }
    cout<<"La suma es> "<<suma<<endl;

    return 0;
}