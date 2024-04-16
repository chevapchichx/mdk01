#include "arr12.h"
#include "iostream"
using namespace std;

int calc_arr12(){
    int b = 0, arr[] = {10, 121, 123, 4, 41, 342, 4234, 42, 789042, 32, 423, 3523, 523, 52367};
    for (int i : arr){
        cout << i << " ";
        if (i % 13 == 0){
            b++;
        }
    }
    cout << "\nКоличество чисел, кратных 13: " << b << " ";
    return 0;
}