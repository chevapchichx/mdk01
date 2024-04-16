#include "16_03_2.h"
#include "iostream"
using namespace std;

void count_indices(){
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int** arr = new int*[n];

    for (int i = 0; i < n; i++){
        arr[i] = new int[n];
        for (int j = 0; j < n; j++){
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
        delete [] arr[i];
    }

    delete [] arr;
}