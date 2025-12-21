#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString);
int main()
{
    char hexString[100];
    char* hexString_ip = hexString;
    cout << "请输入一个十六进制数：";
    cin.getline(hexString, 100);
    cout << "十进制为：" << parseHex(hexString_ip) << endl;
    return 0;
}
int parseHex(const char* const hexString)
{
    int length = strlen(hexString);
    int intString = 0;
    for (int i = 0; i < length; i++)
    {
        int number;
        if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            number = hexString[i] - 'A' + 10;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f')
        {
            number = hexString[i] - 'a' + 10;
        }
        else
        {
            number = hexString[i] - '0';
        }
        intString = intString + number * (pow(16, (length - i - 1)));
    }
    return intString;
}