//Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.
#include <iostream>
using namespace std;

int main(){
    int num1=0, num2=0;

    cout<<"Ingresa dos numeros"<<endl;
    cin>>num1;
    cin>>num2;

    if(num1>num2){
        cout<<"El numero "<<num1<<" es mayor que "<<num2<<endl;
    }else if(num1==num2){
        cout<<"Los numeros son iguales"<<endl;
    }else{
        cout<<"El numero "<<num1<<" es menor que "<<num2<<endl;
    }


    return 0;
}