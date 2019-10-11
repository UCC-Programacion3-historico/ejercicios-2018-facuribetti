#include <iostream>
using namespace std;

void impares(int num);

void impares(int num){
    if(num == 0)
        return;
    else{
        if (num%2 == 0)
        {
            num--;
            impares(num);
        }
        else{
            cout << num << endl;
            num--;
            impares(num);
        }
    }
};

int main(){
unsigned int num;

cout << "ingrese el numero " << endl;
cin >> num;
impares(num);


return 0;
}

