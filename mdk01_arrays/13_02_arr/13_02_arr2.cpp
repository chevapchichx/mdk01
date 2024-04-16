#include "13_02_arr2.h"
#include "iostream"

using namespace std;

int v;
bool calc_arr(int array[]) {

    for (int i = 0; i < v - 1; i++) {
        for (int j = i + 1; j < v; j++) {
            if (array[i] == array[j]) {
                return true;
            }
        }
    }
    return false;
}

int get_same_num(){
    cout << "Количество элементов: ";
    cin >> v;

    int arr[v];
    cout << v << " элемента/ов через пробел: ";
    for (int i = 0; i < v; i++) {
        cin >> arr[i];
    }
    if (calc_arr(arr)){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}
