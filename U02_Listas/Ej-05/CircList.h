#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "Nodo.h"

/**
 * Clase que implementa una Lista Enlasada circular, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class CircList {
private:
    Nodo<T> *inicio;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    void remover(int pos);

    T getDato(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();
};


/**
 * Constructor de la clase Lista
 * @tparam T
 */
template<class T>
CircList<T>::CircList() {
    inicio = nullptr;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template<class T>
CircList<T>::CircList(const Lista<T> &li) {}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
CircList<T>::~CircList() {
    vaciar();
}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template<class T>
bool CircList<T>::esVacia() {
    return (inicio = nullptr);
}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template<class T>
int CircList<T>::getTamanio() {
    Nodo<T> *aux = inicio;
    Nodo<T> *AUX = inicio;
    int cant = 0;

    if(inicio == nullptr)   //Caso de que la lista este vacia
        return 0;

    aux->getSiguiente(); // si hay un solo elemento, el siguiente seria el mismo y para el if ambos datos serian iguales;
    cant++;
    if(aux == AUX)  //Caso de que haya un solo elemento, apunta a si mismo
        return cant;

    //resto de los casos, mas de dos elementos
    while(aux!= AUX){
        aux = aux->getSiguiente();
        cant++;
    }
    return cant;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void CircList<T>::insertar(unsigned int pos, T dato) {
    int posActual = 0;
    Nodo<T> *aux = inicio, *nuevo;

    if(pos == 0){ //primer posicion: creo un nuevo nodo, le inserto un dato, lo hago apuntar a inicio y hago que inicio apunte a este nodo
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return; //se puede retornar una funcion void para volver a donde la llamaron (salir), pero no se puede retornar datos.
    }

    while(posActual < pos -1 && aux!= nullptr){ //verifico que llegue a la posicion pedida verificando que no se me acabe la lista
        aux->getSiguiente(); // aux = aux.>getsiguiente(); asi lo tenia el profe en su compu
        posActual++;
    }

    if(aux == nullptr)
        throw 404;

    //esto seria para el caso mas basico y normal, insertar en el medio en una lista con elementos
    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);

    if(inicio == nullptr){ //si es el ultimo elemento ???
        inicio = new Nodo<T>;
        inicio->setDato(dato);
        inicio->setSiguiente(nullptr);
    }


}


/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void CircList<T>::insertarPrimero(T dato) {
    insertar(0,dato); //hacer manualmente
}


/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void CircList<T>::insertarUltimo(T dato) {
//  insertar(getTamanio,dato); //una opcion valida pero no muy practica para listas largas

    Nodo<T> *aux = inicio, *nuevo;

    if(aux == nullptr){
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return;
    }
    while(aux->getSiguiente() != nullptr){
        aux = aux->getSiguiente();
    }
    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
}


/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void CircList<T>::remover(int pos) {
    Nodo<T> *aux = inicio, *aBorrar;
    int posActual = 0;

    while(aux != nullptr && posActual < pos){
        aux = aux->getSiguiente();
        posActual++;
    }
    if(aux == nullptr)
        throw 404;
    if(pos == 0){
        inicio = inicio->getSiguiente(); //modifico el puntero inicio
        delete aux;
        return;
    }
    if(aux->getSiguiente() == nullptr)
        throw 405; // nos pasamos de posicion
    aBorrar = aux->getSiguiente();
    aux->setSiguiente(aBorrar->getSiguiente());

    delete aBorrar; // borro el elemento que deslinkeo para liberar memoria.
}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T CircList<T>::getDato(int pos) {
    Nodo<T> *aux = inicio;
    int posActual = 0;
    while (aux!= nullptr && posActual < pos ){
        aux = aux->getSiguiente();
        posActual++;
    }
    if(aux == nullptr)
        throw 404;
    return aux->getDato();
}

/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template<class T>
void CircList<T>::reemplazar(int pos, T dato) {
    Nodo<T> *aux = inicio;
    int posActual = 0;

    while (aux != nullptr && posActual < pos){
        aux = aux->getSiguiente();
        posActual++;
    }
    if(aux == nullptr)
        throw 404;

    aux->setDato(dato);
}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template<class T>
void CircList<T>::vaciar() {
    //Esto se podria realizar utilizando la funcion remover, recorriendo to-do la lista y eliminando cada elemento hasta llegar al fina,todo PROBAR
    Nodo<T> *aux = inicio, *aBorrar;

    while (aux != nullptr) {
        aBorrar = aux;
        aux = aux->getSiguiente();
        delete aBorrar;
    }
    inicio = nullptr;
}


#endif //CIRCLIST_H
