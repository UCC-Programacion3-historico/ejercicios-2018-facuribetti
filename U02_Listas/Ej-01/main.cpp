#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;

int main() {
    Lista <int> *invertir = new Lista <int>;
    int num, lon;
    cout << "Ejercicio 02/01\n" << endl;

    cout << "ingrese la cantidad de elementos de la lista: ";
    cin >> lon;
    cout << endl << "ingrese los elementos de la lista: " << endl;
    for(int i=0; i < lon; i++){
        cin >> num;
        invertir->insertarUltimo(num);
    }

    cout << "lista original:" << endl;
    for(int i=0; i < lon ;i++ ) {
        cout << invertir->getDato(i) << endl;
    }

    fnInvierte(invertir);

    cout << "lista invertida:" << endl;
    for(int i=0; i < lon ;i++ ) {
        cout << invertir->getDato(i) << endl;
    }

    return 0;
}