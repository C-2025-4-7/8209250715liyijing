//字符大小写转换
#include <iostream>
using namespace std;
int main()
{
    char i;
    cout << "朋友，输入一个字符："<<endl;
    cin >> i;
    if (i >= 'a' && i <= 'z')
    {
        cout << "转换为大写：" << (char)(i - 32) << endl;
    }
    else 
    {
        cout << "其后继字符的ASCII码值：" << (int)(i + 1) << endl;
    }
    return 0;
}