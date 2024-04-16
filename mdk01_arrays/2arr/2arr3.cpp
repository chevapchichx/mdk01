#include "2arr3.h"
#include "iostream"
using namespace std;

int get_reverse_3() {
    int n;
    cout << "Размерность массива: ";
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> arr[n - j - 1][n - i - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}