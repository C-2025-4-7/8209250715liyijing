#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "朋友，请输入x：";
    cin >> x;
    if (x > 0 && x < 1)
    {
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5)
    {
        y = 2.0 / (4 * x) + 1;
    }
    else if (x >= 5 && x < 10)
    {
        y = x * x;
    }
    else
    {
        cout << "输入的x超出范围，x应大于0且小于10" << endl;
        return 0;
    }
    cout << "y的值为：" << y << endl;
    return 0;
}