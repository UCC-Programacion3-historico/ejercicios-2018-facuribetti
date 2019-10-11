#include <iostream>
#include "Lista.h"
using namespace std;

int main(){
Lista<int> list;
int valor;


    for (int i = 0; i < 10 ; ++i) {
        list.insertarUltimo(i);
    }
    for (int i = 0; i < 10 ; ++i){
        cout << list.getDato(i) <<endl;
    }
    cout << "ingrese el valor que desea mover a la primera posicion" << endl;
    cin >> valor;
//    try {
        list.MoverPri(valor);
//    }catch (int x){ }


    for (int i = 0; i < 10 ; ++i) {
        cout << list.getDato(i) << endl;
    }
}