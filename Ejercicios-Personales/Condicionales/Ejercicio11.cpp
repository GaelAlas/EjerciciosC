//Solicita dos números y muestra cuál de ellos está más cerca de 100.
#include <iostream>
using namespace std;

int main(){
    int num1=0,num2=0, num1Resta=0, num2Resta=0;

    cout<<"Ingrese dos numeros \n Numero 1:"<<endl;
    cin>>num1;
    cout<<"Numero 2"<<endl;
    cin>>num2;

    //Evaluanddo cual esta mas cerca de 100
    num1Resta=100-num1;
    num2Resta=100-num2;
    
    if(num1Resta>num2Resta){
        cout<<"El numero que esta mas cerca del 100 es: "<<num2<<endl;
    }else{
        cout<<"El numero que esta mas cerca del 100 es: "<<num1<<endl;
    }



    return 0;
}