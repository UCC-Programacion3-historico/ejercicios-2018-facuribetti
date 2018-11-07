//
// Created by martin on 29/08/18.
//

#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>

class nodo {
private:
    T dato;
    nodo *next;
public:
    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        nodo::dato = dato;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }
};


#endif //PROGRAMACION3_NODO_H