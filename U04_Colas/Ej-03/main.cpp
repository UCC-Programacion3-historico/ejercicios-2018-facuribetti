#include <iostream>
#include "ColaPrioridades.h"

using namespace std;

int main() {

    ColaPrioridades<int> c;

    for (int i = 10; i < 20; i++)
        c.encolar(i, i % 3);
    while (!c.esVacia())
        cout << c.desencolar() << endl;

    std::cout << "Ejercicio 04/03\n" << std::endl;
    return 0;
}