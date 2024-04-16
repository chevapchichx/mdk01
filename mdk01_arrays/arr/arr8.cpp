#include "arr8.h"
#include "iostream"
using namespace std;

int calc_arr8() {
    double aver, sum, arr[] = {1.1, 2.1, 3.2, 4.5, 3.8};

    for (double i : arr){
        cout << i << " ";
        sum += i;
    }
    aver = sum / 5;
    cout << "\nСреднее арифметическое элементов: " << aver;
    return 0;
}