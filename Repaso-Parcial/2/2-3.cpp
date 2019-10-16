#include <iostream>
using namespace std;

int menor(int *arr, int n);

int menor(int *arr, int n){

    if(n == 0)
        return arr[0]; //debo mover el menor hasta esta posición

    if(arr[n] < arr[n-1]){
        arr[n-1] = arr[n];
        menor (arr,n-1);
    } else
        menor (arr, n-1);
};

int main(){
    int *arr;
    arr = new int [10];

    arr[0] = 10;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = -5;
    arr[5] = -16;
    arr[6] = 7;
    arr[7] = 8;
    arr[8] = -3;
    arr[9] = 10;
    arr[10] = -11;

    cout << menor(arr, 10) << endl;
    return 0;
}