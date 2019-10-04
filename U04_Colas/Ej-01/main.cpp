 #include <iostream>
#include "../Cola/Cola.h"
using namespace std;
int main() {
    Cola<char> cola1,cola2;
    char aux1,aux2;
    int flag=0;
    cout << "Ejercicio 04/01\n" << endl;

    cola1.encolar('a');
    cola2.encolar('a');
    cola1.encolar('b');
    cola2.encolar('b');
    cola1.encolar('c');
    cola2.encolar('c');
    cola1.encolar('d');
    cola2.encolar('d');
    cola1.encolar('e');
    cola2.encolar('f');


    while(!cola1.esVacia() || !cola2.esVacia())   {
        aux1 = cola1.desencolar();
        aux2 = cola2.desencolar();
        flag = 0;
        if(aux1 == aux2)
            flag = 1;
    };
    if(flag == 1)
        cout << "las colas son iguales" << endl;
    else
        cout << "las colas no son iguales" << endl;
    return 0;
}