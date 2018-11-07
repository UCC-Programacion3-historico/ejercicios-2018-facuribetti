#include <iostream>
#include "../Lista/Lista.h"
using namespace std;
int main() {
    int pos; //posicion se donde quiere ingresar el dato
    int dato;
    int n; //usado para el segundo caso
    cout << "Ejercicio 01/02\n" << endl;
    //voy a crear una lista predeterminada de 4 elementos y luego le pregunto al usuario en que posicion quiere ingresar otro elemento
    Lista <int> lista;

    cout<<"ingrese la longitud de la lista"<<endl;
    int l;
    cin>>l;

    cout<<"ingrese los elementos de la lista"<<endl;
    for(int i=0;i<l;i++)
    {
        cin>>dato;
        lista.insertarUltimo(dato);
    }

//    lista.insertarUltimo(1);
//    lista.insertarUltimo(2);
//    lista.insertarUltimo(3);
//    lista.insertarUltimo(4);

    cout<<"en que posicion desea ingresar otro elemento? "<<endl;
    cout<<"1) Inicio"<<endl;
    cout<<"2) En el medio"<<endl;
    cout<<"4) Al final "<<endl;
    cin>>pos;
    cout<<"ingrese el numero "<<endl;
    cin>>dato;
    switch (pos){
        case 1:
            lista.insertarPrimero(dato);       //ingresar al inicio
            break;
        case 2:
            n = lista.getTamanio()/2;
            lista.insertar(n,dato);      //al medio
            break;
        case 4:
            lista.insertarUltimo(dato);        //al final
            break;
        default:
            cout<<"ingrese una opcion valida"<<endl;
            break;
    }
    //deberia mostrar la lista

    for(int i=0;i<l+1;i++)
    {
        cout<<lista.getDato(i)<<endl;
    }


//    cout<<lista.getDato(0)<<endl;
//    cout<<lista.getDato(1)<<endl;
//    cout<<lista.getDato(2)<<endl;
//    cout<<lista.getDato(3)<<endl;
//    cout<<lista.getDato(4)<<endl;

    cout<<"llegue al final"<<endl;

    return 0;
}