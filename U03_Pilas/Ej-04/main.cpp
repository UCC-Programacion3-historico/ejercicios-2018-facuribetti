#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
char opuesto(char simb);

char opuesto(char simb){
    if(simb == ')')
        return '(';
    if(simb == ']')
        return '[';
    if(simb == '}')
        return '{';
return 0;
}

int main() {
    Pila<char> simb;
    char sim[100],aux;
    cout << "Ingrese una funcion matematica" << endl;
    cin >> sim;

    for(int i=0; sim[i] != '\0' ;i++){
        if(sim[i] == '{' )
            simb.push(sim[i]);
        if(sim[i] == '[' )
            simb.push(sim[i]);
        if(sim[i] == '(' )
            simb.push(sim[i]);

        if(sim[i] == ')' || sim[i] == '}' || sim[i] == ']' ){
            if(simb.esVacia()){
                cout << "los simbolos no estan balanceados" << endl;
            }
            aux = sim[i];
            if(simb.peek() == opuesto(aux))
                simb.pop();
        }

    }

    if(!simb.esVacia())
        cout << "los simbolos estan desbalanceados" << endl;
    else
        cout << "los simbolos en la funcion estan balanceados" << endl;

    return 0;
}