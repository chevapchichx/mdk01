#include "arr9.h"
#include "iostream"
using namespace std;

int calc_arr9(){
    int n, a, b, sum = 0;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "a, b: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++){
        sum += arr[i];
    }
    cout << sum;
    return 0;
}