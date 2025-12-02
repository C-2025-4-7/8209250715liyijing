#include <iostream>
using namespace std;
int main()
{
    double a, b, c, perimeter;
    cout << "输入三角形的三条边：";
    cin >> a >> b >> c;// 判断是否能构成三角形
    if (a + b > c && a + c > b && b + c > a)
    {
        perimeter = a + b + c;
        cout << "周长为：" << perimeter << endl;// 判断是否为等腰三角形
        if (a == b || a == c || b == c)
        {
            cout << "是等腰三角形!" << endl;
        }
        else
        {
            cout << "不是等腰三角形!" << endl;
        }
    }
    else
    {
        cout << "不是三角形" << endl;
    }
    return 0;
}