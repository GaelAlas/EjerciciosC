//Simula un sistema de autenticación con 
//un usuario y contraseña, permitiendo hasta 3 intentos.
//SIN FOR
#include <iostream>
using namespace std;

int main(){
    string user="admin", pass="admin123";
    string user2,pass2;

    cout<<"Ingrese el usuario"<<endl;
    cin>>user2;
    cout<<"Ingrese la contrasenia"<<endl;
    cin>>pass2;

    if(user2==user && pass2==pass){
        cout<<"Ingreso correcto";
    }else {
        cout<<"Usuario o contrasenia incorrectos, tiene 2 intentos."<<endl;
        cout<<"Ingrese el usuario"<<endl;
        cin>>user2;
        cout<<"Ingrese la contrasenia"<<endl;
        cin>>pass2;

        if(user2==user && pass2==pass){
            cout<<"Ingreso correcto";
        }else {
            cout<<"Usuario o contrasenia incorrectos, tiene 1 intento."<<endl;
            cout<<"Ingrese el usuario"<<endl;
            cin>>user2;
            cout<<"Ingrese la contrasenia"<<endl;
            cin>>pass2;

            if(user2==user && pass2==pass){
                cout<<"Ingreso correcto";
            }else {
                cout<<"Ha superado la cantidada de intentos permitida";
            }
                
    }
        
    }
    return 0;
}