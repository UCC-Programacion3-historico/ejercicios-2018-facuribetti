#ifndef PROGRAMACION_3_COLAPRIORIDAD_H
#define PROGRAMACION_3_COLAPRIORIDAD_H

#include "Cola.h"

template<class T>
class ColaPrioridad {
private:
    Cola<T> *colas[10];
public:
    ColaPrioridad();
    void enqueue(T data, unsigned int priority);
    T dequeue();
    bool isEmpty(unsigned int priority);
};
template <class T>
ColaPrioridad<T>::ColaPrioridad() {
    for (int i = 0; i < 9 ; ++i) {
        colas[i] = new Cola<T>;
    }
}
template <class T>
void ColaPrioridad<T>::enqueue(T data, unsigned int priority) {
    if(priority > 9)
        priority = 9;
    colas[priority]->encolar(data);
}

template <class T>
T ColaPrioridad<T>::dequeue() {
    for (int i = 0; i < 9 ; ++i) {
        if(!colas[i]->esVacia()){
            return colas[i]->desencolar();
        }
    }
}
template <class T>
bool ColaPrioridad<T>::isEmpty(unsigned int priority) {
    return colas[priority]->esVacia();
}

#endif //PROGRAMACION_3_COLAPRIORIDAD_H
