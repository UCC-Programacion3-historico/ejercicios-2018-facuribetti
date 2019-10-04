#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

//void posfija();

int main() {
    Pila<char> in;
    Pila<char> out;
    Pila<char> sim;
    int cant = 0;
    char num[50] = "(6+2)∗5−(8/4)";
    cout << "ingresada la siguiente expresion en forma infija : (6+2)∗5−8/4 se debe calcular su forma posfija" << endl;

    for (int i = 0; num[i] != '\0' ;i++)
        cant++;
    for (int i = cant - 1; num[i] != '\0' ;i--)
        in.push(num[i]);
    
    for (int i =0; out.peek() != '\0' ;i++){
        if(in.peek()=='(')
            do{
                in.push(in.pop());
                if(in.peek()=='+'||in.peek()=='-'||in.peek()=='/'||in.peek()=='*')
                    sim.push()
            }while(num[i] != ')');

        if(num[i]=='0' || num[i]=='1' || num[i]=='2' || num[i]=='3' || num[i]=='4' || num[i]=='5' || num[i]=='6' || num[i]=='8' || num[i]=='8' || num[i]=='9' )
        {
            
        }
//        if(num[i]=='+')
//        {
//            int aux1 = pos1.pop();
//            int aux2 = pos1.pop();
//            int aux3 = aux1 + aux2;
//            pos1.push(aux3);
//        }



    }



    return 0;
}