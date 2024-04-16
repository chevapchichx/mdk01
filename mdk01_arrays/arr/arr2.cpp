#include "arr2.h"
#include "iostream"
using namespace std;

int calc_arr2(){
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }

    cout << "Четные элементы массива: ";
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
}