#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
//Agregar la función peek a la clase pila que permita ver el valor del tope de pila sin sacarlo.
int main() {
    cout << "Ejercicio 03/03\n" << endl;
    Pila <int> pila;
    int dato;

    cout<<"ingrese dos numeros a la pila"<<endl;
    cin>>dato;
    pila.push(dato);
    cin>>dato;
    pila.push(dato);
    cout<<"peek: ";
    cout<<pila.peek()<<endl;
    cout<<"elementos de la pila: "<<endl;
    cout<<pila.pop()<<endl;
    cout<<pila.pop()<<endl;
    return 0;
}