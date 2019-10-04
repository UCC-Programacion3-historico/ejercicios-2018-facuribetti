#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
using namespace std;
int main() {
    Lista<int> *uno = new Lista<int>;
    Lista<int> *dos = new Lista<int>;
    for(int i=0;i<10;i++)
        uno->insertarUltimo(i);
    for(int i=10;i<15;i++)
        dos->insertarUltimo(i);
    cout << "Dada dos listas enlazadas, el programa devolverá una lista enlaza que sera la union de ambas" << endl;
//    unir(uno,dos);


    return 0;
}