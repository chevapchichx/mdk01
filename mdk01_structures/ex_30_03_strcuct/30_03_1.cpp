#include "30_03_1.h"
#include "string"
#include "iostream"
#include "cstdio"

using namespace std;

struct student{
    string lastname;
    int grade;
};


struct Student{
    string name;
    int grades[4];
};

void calc_01(){
    int count_Students;
    cout << "Введите кол-во студентов: ";
    cin >> count_Students;
    Student student[count_Students];
    for(int i = 0; i < count_Students; i++){
        cout << "Введите фамилию студента: ";
        cin >> student[i].name;
        cout << "Введите оценки этого студента: ";
        for(int j = 0; j < 4; j++){
            cin>>student[i].grades[j];
        }
    }
    for(int i = 0; i < count_Students; i++){
        float middle_grade = 0;
        for(int j = 0; j < 4; j++){
            middle_grade += student[i].grades[j];
        }
        if(middle_grade >= 4){
            cout << student[i].name << " ";
        }
    }

}










//    string names[n];
//    double averages[n];
//
//    for (int i = 0; i < n; i++) {
//        string lastname;
//        cin >> lastname;
//        names[i] = lastname;
//
//        int total = 0;
//            for (int j = 0; j < 4; j++) {
//                int grade;
//                cin >> grade;
//                total += grade;
//            }
//            averages[i] = total / 4.0;
//        }
//
//        for (int i = 0; i < n; i++) {
//            if (averages[i] >= 4.0) {
//                cout << names[i] << " ";
//            }
//        }
//    }

