#include <iostream>
using namespace std;

int main(){
int n=0;

cout<<"Ingrese un numero"<<endl;
cin>>n;

for(int i=2; i<n; i+=2){
    cout<<"Numero: "<<i<<endl;
}

return 0;
}
