//Pide el monto de una compra 
//y aplica un 10% de descuento si el monto es mayor a $100.
#include <iostream>
using namespace std;

int main(){
    float monto=0;

    cout<<"Ingrese el monto de compra sin el signo $"<<endl; 
    cin>>monto;

    if(monto>100.00){
        monto=monto-(monto*0.10);
        cout<<"Total a pagar con descuento: "<<monto<<endl;
    }else{
        cout<<"No aplica a descuentos"<<endl;
    }
    return 0;
}