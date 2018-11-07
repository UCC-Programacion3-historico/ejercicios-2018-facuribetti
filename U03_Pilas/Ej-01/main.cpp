#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;

int main() {
//    char *palabra;
    char letra;
    Pila <char> palabra;
    int l;

    cout<<"ingrese la longitud de la palabra "<<endl;
    cin>>l;
    cout<<"ingrese la palabra"<<endl;
    for(int i=0;i<l;i++)
    {
        cin>>letra;
        palabra.push(letra);
    }

    cout<<"la palabra invertida es: "<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<palabra.pop();
    }

    return 0;
}