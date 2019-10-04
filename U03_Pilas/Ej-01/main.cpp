#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
int main() {
    char arr[100];
    Pila<char> P;
    cout << "ingrese una palabra" << endl;
    cin >> arr;

    for(int i=0; arr[i] != '\0' ;i++){
        P.push(arr[i]);
    }

    while(!P.esVacia()){
        cout << P.pop();
    }

    return 0;
}