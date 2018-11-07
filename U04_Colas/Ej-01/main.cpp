#include <iostream>
#include "../Cola/Cola.h"
using namespace std;

//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son iguales. Nota: los elementos constitutivos de las colas son caracteres.

int main() {
    cout << "Ejercicio 04/01\n" << endl;

    char temp;
    char temp1;
    char temp2;
    int L;

    Cola <char> cola1;
    Cola <char> cola2;

/*
    cout<<"ingrese la longitud de la primera palabra "<<endl;
    cin>>L;
    cout<<"ingrese la primera palabra "<<endl;
    for(int i=0;i<L;i++)
    {
        cin<<temp;
        cola1.encolar(temp);
    }

    cout<<"ingrese la longitud de la segunda palabra "<<endl;
    cin>>L;
    cout<<"ingrese la segunda palabra "<<endl;
    for(int i=0;i<L;i++)
    {
        cin<<temp;
        cola1.encolar(temp);
    }
*/


    cola1.encolar('F');
    cola1.encolar('a');
    cola1.encolar('c');
    cola1.encolar('u');

    cola2.encolar('F');
    cola2.encolar('a');
    cola2.encolar('c');
    cola2.encolar('o');


    while((cola1.esVacia()||cola2.esVacia())!=1)            //las colas no deben estar vacias
    {
        temp1=cola1.desencolar();
        temp2=cola2.desencolar();


        if(temp1==temp2)
        {
            cout<<"cola 1 "<<temp1<<endl;
            cout<<"cola 2 "<<temp2<<endl;
        }
        else
            //        if(temp1!=temp2);       //no puse else porque me tira: U04_Colas/Ej-01/main.cpp:41:9: error: ‘else’ without a previous ‘if’
        {

            cout<<"cola 1 "<<temp1<<endl;
            cout<<"cola 2 "<<temp2<<endl;
            cout << "No son iguales :( "<<endl;
            cout<<temp1<<" distinto de "<<temp2<<endl;
            return 0;
        }
    }

//    cout<<cola1.desencolar();
//    cout<<cola1.desencolar();
//    cout<<cola1.desencolar();
//    cout<<cola1.desencolar();
    return 0;
}