#include "20_03_4.h"
#include "iostream"

using namespace std;

void Zero(float* p){
    *p = 0;
}

void dec_float(){
    float N;
    cin >> N;

    Zero(&N);
    cout << N;
}
