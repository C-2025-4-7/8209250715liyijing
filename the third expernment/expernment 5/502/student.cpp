// student.cpp 在此文件中进行函数的定义
#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;
void Student::set_value(int num, const char* name, const char sex)
{
    this->num = num;
    this->sex = sex;
    strcpy_s(this->name, sizeof(this->name), name);
}
void Student::display()         //在类外定义display类函数
{
    cout << "num: " << setfill('0') << setw(3) << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}