#include "16_03_1.h"
#include "iostream"
using namespace std;

void read_odd(){
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Элементы массива: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Элементы массива с нечётными индексами: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    delete [] arr;
}