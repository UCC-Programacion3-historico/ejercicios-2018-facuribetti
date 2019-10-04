//
// Created by Facu on 11/9/2019.
//

#ifndef PROGRAMACION_3_NODO_H
#define PROGRAMACION_3_NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *siguiente;
public:
    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        this->dato = dato;
    }

    Nodo<T> *getSiguiente() const {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *siguiente) {
        this->siguiente = siguiente;
    }

};

#endif //PROGRAMACION_3_NODO_H
