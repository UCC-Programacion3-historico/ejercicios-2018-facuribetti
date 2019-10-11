//Escribir una función recursiva que tenga un parámetro que sea
//entero positivo y despliegue en la pantalla ese número de asteriscos: “*”,
//todos en una línea.
#include <iostream>
using namespace std;

void aster(int num);

void aster(int num){
    if(num == 0){
        return;
    }else{
        cout << "*";
        num--;
        aster(num);
    }
}

int main(){
unsigned int num;

cout << "ingrese un numero y el numero le mostrará el asterisco" << endl;
cin >> num;
aster(num);

}
