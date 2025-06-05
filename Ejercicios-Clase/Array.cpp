#include <iostream>
using namespace std;

int main(){
    int notas[5];

    for(int i=0; i<5; i++){
        cout<<"Ingrese la nota "<<i+1<<endl;
        cin>>notas[i];

    // 
    cout<<"Imprimiendo notas:"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;

    }
    //Imprimiendo a la inversa
    cout<<"Notas a la inversa"<<endl;
    for(int i=4;i>=0;i--){
        
         cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;
    }

    return 0;
    }
}