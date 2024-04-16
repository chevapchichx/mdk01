#include "30_03_2.h"
#include <iostream>
#include <string>

using namespace std;

struct Student_02{
    string name;
    int grade;
};

void calc_grade(){
    int count_Students;
    cout << "Введите кол-во студентов: ";
    cin >> count_Students;
    Student_02 student[count_Students];
    cout << "Введите фамилию студентов и через пробел оценку: \n";
    for(int i = 0; i < count_Students; i++){
        cin >> student[i].name;
        cin >> student[i].grade;
    }
    int summ_grade = 0;
    for(int i = 0; i < count_Students; i++){
        summ_grade += student[i].grade;
    }
    float midle_grade = summ_grade/count_Students;
    for(int i = 0; i < count_Students; i++){
        if(student[i].grade > midle_grade){
            cout << student[i].name << "\n";
        }
    }

}

