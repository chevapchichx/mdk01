#include "30_03_4.h"
#include <iostream>
#include <string>
using namespace std;

struct Product_04{
    string name;
    float price;
    int count;
};

void calc_goods_04(){
    int count_products;
    cout << "Введите кол-во товаров на складе: ";
    cin >> count_products;

    Product_04 product[count_products];
    float price = 0;
    string name;
    int count;
    cout << "Введите название продукта, цену и колво: \n";
    for(int i = 0; i < count_products; i++){
        cin >> product[i].name;
        cin >> product[i].price;
        cin >> product[i].count;
        if(product[i].price > price){
            price = product[i].price;
            name = product[i].name;
            count = product[i].count;
        }
    }
    cout << "Самым дорогим товаром ялвляется: \n";
    cout << "Название товара: "<< name <<", Стоимость: " << price <<", Количество: " << count;
}
