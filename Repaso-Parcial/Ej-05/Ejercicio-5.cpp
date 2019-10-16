#include <iostream>
#include <string>
#include "Pila.h"

using namespace std;

int main() {

    Pila<string> p1;
    string palabra;

    cout << "Ingrese palabra por palabra la frase a invertir. Ingrese 0 para terminar." << endl;
    for (int i = 0; i < 3; ++i) {
        cin >> palabra;
        p1.push(palabra);
    }

    cout << "Frase Invertida: ";
    while(!p1.esVacia()){
        cout << p1.pop() << " ";
    }

    return 0;
}