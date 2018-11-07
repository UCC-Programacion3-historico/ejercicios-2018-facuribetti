//Escriba una función que indique si dos pilas son iguales. Se entiende que dos pilas son iguales cuando sus elementos son idénticos y aparecen en el mismo orden.

#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    int l;
    int dato;
    cout << "Ejercicio 03/02\n" << endl;

    Pila <int> pila1;
    Pila <int> pila2;

    cout<<"ingrese la longitud de las pilas"<<endl;
    cin>>l;
    cout<<"ingrese la primera pila"<<endl;
    for(int i=0;i<l;i++)
    {
        cin>>dato;
        pila1.push(dato);
    }
    cout<<"ingrese la segunda pila"<<endl;
    for(int i=0;i<l;i++)
    {
        cin>>dato;
        pila2.push(dato);
    }
    int temp1;
    int temp2;
//    cout<<"llegue hasta aca prro"<<endl;
    temp1=pila1.pop();
    temp2=pila2.pop();
    pila1.push(temp1);
    pila2.push(temp2);
//    cout<<"llegue hasta aca prro 2"<<endl;
//    while(temp1==temp2) //la condicion podria ser sobre si las listas estan vacias o no, y si una lista se vacia antes que la otra tirar un (return o) y decir que no son iguales
//    {
//        cout<<"llegue hasta aca prro 3"<<endl;
    for(int i=0; i<l;i++)
    {
        cout<<"llegue hasta aca prro "<<endl;
        temp1=pila1.pop();
        temp2=pila2.pop();
        pila1.push(temp1);
        pila2.push(temp2);

        if(temp1==temp2)
        {
            pila1.pop();
            pila2.pop();
        }
        else
        {
            cout<<"las pilas no son iguales"<<endl;
            return 0;
        }
    }

//    }
    cout<<"las pilas son iguales prro"<<endl;
    return 0;
}