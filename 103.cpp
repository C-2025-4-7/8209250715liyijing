#include <iostream>
using namespace std;
int main()
{
    cout << "char length：" << sizeof(char) << "字节" << endl;
    cout << "int length：" << sizeof(int) << "字节" << endl;
    cout << "short length：" << sizeof(short) << "字节" << endl;
    cout << "long length：" << sizeof(long) << "字节" << endl;
    cout << "float length：" << sizeof(float) << "字节" << endl;
    cout << "double length：" << sizeof(double) << "字节" << endl;
    cout << "long double length：" << sizeof(long double) << "字节" << endl;
	cout << "wchar_t length：" << sizeof(wchar_t) << "字节" << endl;
	cout << "bool length:" << sizeof(bool) << "字节" << endl;
	cout << "signed char length:" << sizeof(signed char) << "字节" << endl;
	cout << "unsigned char length:" << sizeof(unsigned char) << "字节" << endl;
	cout << "signed int length:" << sizeof(signed int) << "字节" << endl;
	cout << "unsigned int length:" << sizeof(unsigned int) << "字节" << endl;
	cout << "signed short int length:" << sizeof(signed short int) << "字节" << endl;
	cout << "signed long int length:" << sizeof(signed long int) << "字节" << endl;
	cout << "unsigned short int length:" << sizeof(unsigned short int) << "字节" << endl;
	cout << "unsigned long int length:" << sizeof(unsigned long int) << "字节" << endl;
    return 0;
}