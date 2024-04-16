#include "2arr1.h"
#include "iostream"
using namespace std;

int calc_income(){
    int day_count, month_count;
    cout << "Количество дней в месяце, количество месяцев в году: ";
    cin >> day_count >> month_count;

    int arr_income[day_count][month_count];

    for (int i = 0; i < day_count; i++){
        cout << "Количество денег за " << i+1 << "-й месяц: ";
        for (int j = 0; j < month_count; j++) {
            cin >> arr_income[i][j];
        }
    }

    for (int j = 0; j < month_count; j++) {
        int income = 0;
        for (int i = 0; i < day_count; i++) {
            income += arr_income[i][j];
        }
        cout << income << " ";
    }
    return 0;
}
