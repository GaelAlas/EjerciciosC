#include <iostream>
using namespace std;

int main() {
    int numero, fib = 0, b = 1, contador = 0, siguiente=0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    do {
        cout << fib << endl;
        siguiente = fib + b;
        fib = b;
        b = siguiente;
        contador++;
    } while (contador < numero);

    return 0;
}
