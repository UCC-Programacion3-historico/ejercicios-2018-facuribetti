#include <iostream>
#include "potencia.h"

using namespace std;

int main() {
    unsigned int n,k;
    cout << "Ejercicio 01/01\n" << endl;
    cout << "Ingrese el numero del cual desea calcular su potencia" << endl;
    cin  >> n;
    cout << "ingrese la potencia a la cual desea elevarlo" << endl;
    cin >> k;
    cout << "La potencia del numero ingresado es: " << potencia(n,k) << endl;
    return 0;
}