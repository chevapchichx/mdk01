#include "arr3.h"
#include "iostream"
using namespace std;

int calc_arr3(){
    int n, b = 0;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }

    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            b++;
        }
    }
    cout << "Количество положительных элементов: "<< b << " ";
    return 0;
}
