#include <iostream>
using namespace std;
int main()
{
    int a, b, t, g, l;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    t = a % b;
    while (t != 0)
    {
        a = b;
        b = t;
        t = a % b;
    }
    g = b;
    l = (a * b) / g; // 注意：这里的a是原来的b，乘积为两数的乘积
    cout << "最大公约数：" << g << endl;
    cout << "最小公倍数：" << l << endl;
    return 0;
}