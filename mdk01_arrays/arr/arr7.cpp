#include "iostream"
using namespace std;

int calc_arr7(){
    int n, b;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Элементы массива: ";
    for (int a = 0; a < n; a++) {
        cin >> arr[a];
    }

    for (int i : arr) {
        if (i % 2 == 1) {
            if (i < b) {
                b = i;
                cout << "Наименьший нечетный элемент: " << b;
            }
        }
    }
    return 0;
}
