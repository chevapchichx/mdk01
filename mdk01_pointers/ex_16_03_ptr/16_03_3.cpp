#include "16_03_3.h"
#include "iostream"
using namespace std;

void dec(int* n){
    *n -= 1;
}

void decrement(){
    int N;
    cin >> N;

    dec(&N);
    cout << N;
}