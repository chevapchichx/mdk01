#include "arr1.h"
#include "iostream"
using namespace std;

int calc_arr1(){
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }

    cout << "Элементы с четными индексами: ";
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}