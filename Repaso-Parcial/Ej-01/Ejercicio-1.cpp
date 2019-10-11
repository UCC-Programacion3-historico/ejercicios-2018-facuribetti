
#include <iostream>
#include "Lista.h"
#include "Pila.h"
using namespace std;

void eliminar (Lista<int> *list,Pila<int> pos);

void eliminar (Lista<int> *list,Pila<int> pos){

    while(!pos.esVacia()){
        list->remover(pos.pop());
    }

};

int main(){
    Lista <int> *list = new Lista <int>;
Pila<int>  pos;


list->insertarPrimero(1);
list->insertarUltimo(2);
list->insertarUltimo(3);
list->insertarUltimo(4);
list->insertarUltimo(5);
list->insertarUltimo(6);
list->insertarUltimo(7);

    for (int i = 0; i < list->getTamanio() -1 ; ++i) {
        cout << list->getDato(i) << endl;
    }

pos.push(2);
pos.push(3);


eliminar(list,pos);

cout << "lista nueva " << endl;
    for (int i = 0; i < list->getTamanio() -1 ; ++i) {
        cout << list->getDato(i) << endl;
    }

return 0;
}