#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbol {
private:
    T dato;
    NodoArbol *left, *right;
public:
    NodoArbol(T d);
    NodoArbol();
    T getDato();
    void setDato(T d);

    NodoArbol *getLeft() const;

    NodoArbol *getRight() const;

    void setRight(NodoArbol *right);

    void setLeft(NodoArbol *left);
};

template<class T>
NodoArbol<T>::NodoArbol(T d) {

}


template<class T>
NodoArbol<T>::NodoArbol() {
    left = nullptr;
    right = nullptr;
}

template<class T>
T NodoArbol<T>::getDato() {
    return dato;
}

template<class T>
void NodoArbol<T>::setDato(T d) {
    dato = d;
}

template<class T>
NodoArbol *NodoArbol<T>::getLeft() const {
    return left;
}

template<class T>
void NodoArbol<T>::setLeft(NodoArbol *left) {
    NodoArbol::left = left;
}

template<class T>
NodoArbol<T> * NodoArbol<T>::getRight() const {
    return right;
}

template<class T>
void NodoArbol<T>::setRight(NodoArbol *right) {
    NodoArbol::right = right;
}

#endif //NODOARBOL_H