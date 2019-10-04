#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    Lista<int> ingresar;
    int opcion;
    for(int i=0;i<10;i++)
        ingresar.insertarUltimo(i);
    
    cout << "¿En que posicion desea agregar el elemento?: " << endl;
    cout << "1) Al inicio de la lista" << endl;
    cout << "2) Al medio de la lista" << endl;
    cout << "3) Al final de la lista" << endl;
    cin >> opcion;
    if (opcion == 1)
        ingresar.insertar()    
    if (opcion == 2)
        
    if (opcion == 3)
        
        
    return 0;
}