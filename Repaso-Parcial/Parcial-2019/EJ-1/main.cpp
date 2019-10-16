#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

void remover (Pila<int> &p, int n);

void remover (Pila<int> &p, int n){
    int aux;
    Pila<int> A;
    while(!p.esVacia()){
        aux = p.pop();
        if (aux == n){
            while(!A.esVacia()){
                p.push(A.pop());
            }
            while(!p.esVacia())
                cout << p.pop() << endl;
            return;
        }
        else
            A.push(aux);
    }
    while(!A.esVacia()){
        p.push(A.pop());
    }
    return;
};


int main(){
Pila<int> p;
int n = 5;

p.push(3);
p.push(2);
p.push(5);
p.push(3);
p.push(9);

cout << "el elemento a sacar de la pila es el numero 5" << endl;

remover(p, n);

while(!p.esVacia())
    cout << p.pop() << endl;
return 0;
}