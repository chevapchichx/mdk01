#include "arr4.h"
#include "iostream"
using namespace std;

int calc_arr4(){
    int n, c;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }

    cout << "Элементы, которые больше предыдущего элемента: ";
    for (int i = 1; i < n; i++){
        c = arr[i-1];
        if (arr[i] > c){
            cout << arr[i] << " ";
        }
    }
    return 0;
}