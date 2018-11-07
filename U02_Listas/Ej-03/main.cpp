#include <iostream>
#include "../Lista/Lista.h"
using namespace std;
int main() {
    cout << "Ejercicio 01/03\n" << endl;
    Lista <int> lista;
    int n;

    lista.insertarUltimo(1);
    lista.insertarUltimo(2);
    lista.insertarUltimo(3);
    lista.insertarUltimo(4);
    lista.insertarUltimo(5);
    lista.insertarUltimo(6);
    lista.insertarUltimo(7);
    lista.insertarUltimo(8);
    lista.insertarUltimo(9);
    lista.insertarUltimo(10);

    cout<<"la lista predeterminada es: "<<endl;

    cout<<lista.getDato(0)<<"[0]"<<endl;
    cout<<lista.getDato(1)<<"[1]"<<endl;
    cout<<lista.getDato(2)<<"[2]"<<endl;
    cout<<lista.getDato(3)<<"[3]"<<endl;
    cout<<lista.getDato(4)<<"[4]"<<endl;
    cout<<lista.getDato(5)<<"[5]"<<endl;
    cout<<lista.getDato(6)<<"[6]"<<endl;
    cout<<lista.getDato(7)<<"[7]"<<endl;
    cout<<lista.getDato(8)<<"[8]"<<endl;
    cout<<lista.getDato(9)<<"[9]"<<endl;

    cout<<"ingrese la posicion del elemento que desea borrar"<<endl;
    cin>> n;
    lista.remover(n);
    for(int i=0;i<lista.getTamanio();i++)
        cout<<lista.getDato(i)<<"["<<i<<"]"<<endl;


    return 0;
}