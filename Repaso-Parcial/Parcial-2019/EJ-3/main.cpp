#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main(){
Lista<int> lis;

lis.insertarUltimo(3);
lis.insertarUltimo(4);
lis.insertarUltimo(7);
lis.insertarUltimo(5);

for (int i = 0; i < lis.getTamanio() ; ++i) {
     cout << lis.getDato(i) << endl;
}


cout << "el penultimo elemento es: ";
cout << lis.antePenultimo();

return 0;
}