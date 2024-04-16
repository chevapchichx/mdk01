#include "arr6.h"
#include "iostream"
using namespace std;

int calc_arr6(){
    int n, b;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++) {
        cin >> arr[a];
    }

    for (int i: arr)
        if (i > 0 && i < b)
            b = i;

    cout <<"Минимальный элемент: " << b;
    return 0;
}