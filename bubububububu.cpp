#include "bubububububu.h"
#include "iostream"
#include "string"
#include "cstdio"
#include "stack"
#include "queue"
#include "set"
#include "vector"
#include "map"

using namespace std;

enum errors{
    ERR_OK = 0,
    ERR_INPUT = 1,
    ERR_OUTPUT = 2
};

struct hahaha{
private:
    int num_ha;
    string ha_ha;

public:
    void print(){
        cout << num_ha << ") " << ha_ha << "\n";
    }

    void input(){
        cin >> num_ha >> ha_ha;
    }

    int error = errors::ERR_OK;
};

void bububu(){
    queue<int> s;

    int n;
    cin >> n;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        s.push(val);
    }

    cout << s.size() << "\n";

    while (!s.empty()){
        cout << s.front() << " ";
        s.pop();
    }


//    int n;
//    cin >> n;
//
//    hahaha arr[n];
//    arr[0].error = errors::ERR_INPUT;
//    for (int i = 0; i < n; i++){
//        arr[i].input();
//    }
//
//    for (int i = 0; i < n; i++){
//        arr[i].print();
//    }

}

