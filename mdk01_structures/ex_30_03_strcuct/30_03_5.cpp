//#include "30_03_5.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Goods {
//    string name;
//    double pricePerUnit;
//    int quantity;
//};
//
//void calc_goods() {
//    Goods products[5];
//
//    for (int i = 0; i < 5; ++i) {
//        cin >> products[i].name;
//        cin >> products[i].pricePerUnit;
//        cin >> products[i].quantity;
//    }
//    double totalCost = 0;
//
//    for (int i = 0; i < 5; ++i) {
//        totalCost += products[i].pricePerUnit * products[i].quantity;
//    }
//    cout << totalCost << endl;
//}

#include <iostream>
#include <string>

using namespace std;
struct Product_034 {
    string name;
    int price;
};

void calc_goods() {
    int num_products;
    cout << "Введите количество продуктов: ";
    cin >> num_products;

    Product_034 products[num_products];

    for (int i = 0; i < num_products; ++i) {
        cin >> products[i].name >> products[i].price;
    }

    int total_revenue = 0;
    for (int i = 0; i < num_products; ++i) {
        total_revenue += products[i].price;
    }

    cout << total_revenue << endl;

}

