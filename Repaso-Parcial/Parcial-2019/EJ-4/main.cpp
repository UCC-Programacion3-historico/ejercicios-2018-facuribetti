#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main(){
    Lista<int> lis;

    lis.insertarUltimo(3);
    lis.insertarUltimo(4);
    lis.insertarUltimo(7);
    lis.insertarUltimo(5);

    for (int i = 0; i < lis.getTamanio() ; ++i) {
        cout << lis.getDato(i) << endl;
    }

    lis.aSegundo();

    cout << "la nueva lista es: " << endl;



    for (int i = 0; i < lis.getTamanio() ; ++i) {
        cout << lis.getDato(i) << endl;
    }

    return 0;
}

/*
 template<class T>
void Lista<T>::aSegundo() {
    Nodo<T> *aux = inicio, *aMover = inicio;

    // si la lista esta vacia tiro exp
    if (aux == nullptr)
        throw 404;

//    *aMover = *aux;
    aMover->setSiguiente(aux->getSiguiente()); //hago que el primer elemento me apunte al tercero (segundo)
    inicio = aux->getSiguiente(); //inicio me apunta al segundo elemento (primero)
    aux = aux->getSiguiente();    //   aux me apunta al segundo elemento (primero)

    aux->setSiguiente(aMover);

    //

    //
//    std::cout << aux->getDato() << "prro" << std::endl;
}
 */