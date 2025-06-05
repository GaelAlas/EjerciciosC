//El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50.
#include <iostream>
using namespace std;

int main(){
    int num=0, intento=0, random=12;
    /*En este caso se ha dejado un numero fijo, sin embargo se puede usar 
    la libreria random para que se genere al azar de forma automatica*/
    do
    {
        cout<<"Adivine el numero entre 1 y 50"<<endl;
        cin>>num;

        if(num==random){
            intento=5;
        }
        else{
            intento++;
        }
    } while (intento<5);
    


    return 0;
}