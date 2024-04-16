#include "20_03_2.h"
#include "iostream"

using namespace std;

void calc_dec(){
    int* ptr;
    ptr = new int;
    *ptr = 123;
    cout << *ptr;
    delete ptr;
}
