#include "2arr2.h"
#include "iostream"
using namespace std;

int get_reverse_2() {
    int n, m;
    cout << "количество строк и столбцов через пробел: ";
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> arr[n - i - 1][m - j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}