#include <iostream>
#include "sumatoria.h"

using namespace std;
int main() {
    cout << "Ejercicio 01/02\n" << endl;
    unsigned int n;
    do{
        cout << "ingrese la longitud del array" << endl;
        cin >> n;
    }while (n < 0);

    int *arr;
    arr = new int [n];
    cout << "ingrese los elementos del array" << endl;
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    cout << "El resultado es: " << sumatoria(arr,n-1) << endl;
    return 0;
}