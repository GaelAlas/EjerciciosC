//Pide la velocidad de un conductor. Si supera los 60 km/h, 
//se le aplica una multa; si supera los 80 km/h, la multa es mayor.
#include <iostream>
using namespace std;

int main(){
    int velocidad=0;

    cout<<"Ingrese la velcidad del conductor (solo el numero)"<<endl;
    cin>>velocidad;

    if(velocidad>60 && velocidad<=79){
        cout<<"Falta grave: \n La multa que se le aplicara sera de $50.00";
    }else if(velocidad>=80){
        cout<<"Falta muy grave: \n La multa que se le aplicara sera de $150.00";
    }else{
        cout<<"No ha cometido ninguna falta";
    }


    return 0;
}
