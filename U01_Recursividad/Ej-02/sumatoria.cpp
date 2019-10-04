#include <iostream>
#include "sumatoria.h"
using namespace std;

int sumatoria(int *arr, unsigned int size) {

    if(size == 1){
        arr[size - 1] = arr[size] + arr[size - 1];
        return arr[size-1];
    }
    else{
        arr[size - 1] = arr[size] + arr[size-1];
        sumatoria(arr,size-1);
    }
}
/*
 * [3] =
 * [2] = [3]3 + [2]2 = 5
 * [1] = [2]5 + [1]1 = 6
 * [0] =

 */