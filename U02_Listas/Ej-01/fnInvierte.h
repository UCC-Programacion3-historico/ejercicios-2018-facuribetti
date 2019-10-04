#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H
using namespace std;

template <class T>
void fnInvierte (Lista<T> *lis);

template <class T>
void fnInvierte (Lista<T> *lis) {
int lon = lis->getTamanio();
int j = lon;

    if(lon % 2 == 0)
        lon = lon / 2;
    else
         lon = (lon - 1) / 2;

    for(int i=0; i < lon ;i++){
        int aux = lis->getDato(i);
        int aux2 = lis->getDato(j-1);
        lis->reemplazar(i,aux2);
        lis->reemplazar(j-1,aux);
        j--;
    }
}
/*
pequeño pseudo-codigo:
    si es par
        intercambio todos los elementos
    else
        doy vuelta todos menos el elemento central
 */
#endif //FNINVIERTE_H