#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main(){
    Lista<int> lis;
    int N;

    lis.insertarUltimo(4);
    lis.insertarUltimo(3);
    lis.insertarUltimo(2);
    lis.insertarUltimo(1);

    for (int i = 0; i < lis.getTamanio()  ; ++i) {
        cout << lis.getDato(i) << endl;
    }

    cout << "ingrese el valor de N" << endl;
    cin >> N;

    cout << "el valor de la sumatoria es : ";
    cout << lis.suma(N);

    return 0;
}
