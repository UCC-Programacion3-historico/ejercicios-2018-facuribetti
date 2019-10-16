#include <iostream>
using namespace std;

#include "Cola/ColaPrioridad.h"
int main(){
ColaPrioridad<int> cola;
unsigned int prioridad;
    int dato;
unsigned int cant = 0;
    do{
        cout << "ingrese la prioridad del dato" << endl;
        cin >> prioridad;
        cout << "ingrese el dato" << endl;
        cin >> dato;
        cola.enqueue(dato,prioridad);
        cant ++;
    }while(dato != 10);
cout << "datos enviados" << endl;
    for (int i = 0; i < cant ; ++i) {
        cout << cola.dequeue() << " " ;
    }
return 0;
}