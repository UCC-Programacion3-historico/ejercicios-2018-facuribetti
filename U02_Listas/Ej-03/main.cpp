#include <iostream>
#include "../Lista/Lista.h"
using namespace std;
int main() {
    int borrar;
    Lista <int> *borra = new Lista <int>;

    cout << "Ingrese el elemento que desea borrar: " << endl;
    cin >> borrar;
    for(int i =0;i<10;i++)
        borra->insertarUltimo(i);
    cout << "lista original:" << endl;

    for(int i=0;i<borra->getTamanio();i++)
        cout << borra->getDato(i) <<endl;

    for(int i=0;i<borra->getTamanio();i++)
        if(borra->getDato(i) == borrar )
            borra->remover(i-1);
    cout << "lista con el elemento " << borrar << " eliminado" << endl;
    for(int i=0;i<borra->getTamanio();i++)
        cout << borra->getDato(i) <<endl;
    return 0;
}