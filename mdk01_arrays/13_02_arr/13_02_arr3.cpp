#include "13_02_arr3.h"
#include "iostream"
using namespace std;

int n;
int calc_even(int array[n]) {
    int c = 0;
    cout << "Четные элементы массива: ";
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            c++;
            cout << array[i] << " ";
        }
    }
    cout << "\n" << "Количество четных элементов: " << c;
    return 0;
}

int calc_even_nums(){
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
    calc_even(arr);
    return 0;
}
