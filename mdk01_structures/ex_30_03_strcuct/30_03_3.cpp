#include "30_03_3.h"
#include <iostream>
#include <string>
using namespace std;

struct Product{
    string name;
    int buy_price;
    int end_price;
};

void calc_profit(){
    int count_products;
    cout << "Введите кол-во продуктов: ";
    cin >> count_products;
    Product product[count_products];
    cout << "Введите название продукта, закупочную цену и цену продажи: \n";
    for(int i = 0; i < count_products; i++){
        cin >> product[i].name;
        cin >> product[i].buy_price;
        cin >> product[i].end_price;
    }
    int money = 0;
    for(int i = 0; i < count_products; i++){
        money += (product[i].buy_price - product[i].end_price);
    }
    cout << -money;
}
