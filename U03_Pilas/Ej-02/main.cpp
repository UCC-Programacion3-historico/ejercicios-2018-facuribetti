#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
int main() {
    Pila<int> pila1,pila2;
    int aux1,aux2,igual = 0;

    pila1.push(5);
    pila1.push(4);
    pila1.push(3);
    pila1.push(2);
    pila1.push(1);

    pila2.push(5);
    pila2.push(4);
    pila2.push(3);
    pila2.push(2);
    pila2.push(1);

    while(!pila1.esVacia() && !pila2.esVacia()){
        aux1 = pila1.pop();
        aux2 = pila2.pop();
        if(aux1 == aux2)
            igual = 1;
        else{
            cout << "las pilas son distintas: el elemento " << aux1 << " es distinto del elemento " << aux2 << endl;
            return 0;
        }
    }
    if(pila1.esVacia() && pila2.esVacia() && igual == 1)
        cout << "las pilas son identicas" << endl;
    else
        cout << "las pilas no son iguales" << endl;
    return 0;
}