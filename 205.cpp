#include <iostream>
#include <cctype> 
using namespace std;
int main()
{
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;
    cout << "朋友，输入一行字符（以回车结束）：";
    cin.ignore();
    while ((c = cin.get()) != '\n')
    {
        if (isalpha(c))// 判断是否为字母
        {
            letter++;
        }
        else if (isspace(c))// 判断是否为空格
        {
            space++;
        }
        else if (isdigit(c))// 判断是否为数字
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    cout << "字母：" << letter <<"个" << endl;
    cout << "空格：" << space <<"个" << endl;
    cout << "数字：" << digit <<"个" << endl;
    cout << "其他字符：" << other <<"个" << endl;
    return 0;
}