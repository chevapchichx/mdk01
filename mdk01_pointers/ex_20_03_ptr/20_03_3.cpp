#include "20_03_3.h"
#include "iostream"

using namespace std;

void calc_inc_ptr(){
    int n;
    cin >> n;

    int* ptr = &n;
    *ptr += 1;
    cout << *ptr;

//    delete ptr;
}
