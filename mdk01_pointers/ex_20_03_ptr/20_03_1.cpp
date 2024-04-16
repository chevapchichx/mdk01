#include "20_03_1.h"
#include "iostream"
using namespace std;

void dynamic_arr(){
    double* arr1 = new double[5];

    for (int i = 0; i < 5; i++) {
        arr1[i] = 1.0;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";

    }
    delete[] arr1;
}