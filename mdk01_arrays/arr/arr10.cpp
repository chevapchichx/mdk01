#include "arr10.h"
#include "iostream"
using namespace std;

int calc_arr10() {
    int b, arr[] = {10, 121, 123, 4, 41, 3, 342};

    for (int i : arr){
        cout << i << " ";
        if (i < b){
            b = i;
        }
    }
    cout << "\nМинимальный элемент: " << b;
    return 0;
}