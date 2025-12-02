#include<iostream>//缺少#
using namespace std;
int main()//m要小写
{
	int i, k;
	k = 1;//原k未赋值
	i = k + 1;
	cout << i++ << endl;
	i = 1;//i多次初始化定义
	cout << i++ << endl;
	cout << "Welcome to C++!"<< endl;//""应该框住输出文字
	return 0;//缺少；
}