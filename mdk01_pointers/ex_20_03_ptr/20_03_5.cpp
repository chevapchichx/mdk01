#include "20_03_5.h"
#include "iostream"

using namespace std;

void Zero(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
}

void zero_arr(){
    int num;
    cin >> num;

    auto* arr = new float[num];
    for (int i = 0; i < num; i++) {
        arr[i] = 2;
    }
    for(int i = 0; i < num; i++) {
        cout << *(arr + 1) << " ";
    }
    cout<<endl;

    Zero(arr, num);
    for(int i = 0; i < num; i++) {
        cout << *(arr + i) << " ";
    }
    delete arr;
}
