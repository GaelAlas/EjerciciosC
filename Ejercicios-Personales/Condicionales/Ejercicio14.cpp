//Pide un año y determina si es bisiesto.
#include <iostream>
using namespace std;

int main(){
    int anio=0;

    cout<<"Ingrese un anio para determinar si es bisiesto"<<endl;
    cin>>anio;

    if(anio%4==0 && anio%100!=0){
        cout<<"El anio "<<anio<<" es bisiesto"<<endl;
    }else if((anio%400)==0){
        cout<<"El anio "<<anio<<" es bisisesto"<<endl;
    }else{
        cout<<"El anio "<<anio<<" no es bisiesto"<<endl;
    }

    return 0;
}