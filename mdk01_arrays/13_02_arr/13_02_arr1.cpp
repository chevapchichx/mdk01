#include "13_02_arr1.h"
#include "iostream"

using namespace std;

const int SIZE = 256;

int get_multi(int arr[][SIZE], int i, int j) {
    for (int a = 1; a < i+1 ; a++) {
        for (int b = 1; b < j+1; b++) {
            arr[a][b] = a * b;
            cout << arr[a][b] << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int calc_multi_table(){
    int n, m;
    cout << "Введите количество строк и столбцов через пробел: ";
    cin >> n >> m;
    int array[n][SIZE];
    get_multi(array, n, m);
    return 0;
}

