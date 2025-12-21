#include <iostream>
using namespace std;
int gongyinshu(int x, int y);
int gongbeishu(int x, int y);
int main()
{
    cout << "请输入两个自然数：";
    int a, b, m, n;
    while (true) //确保输入的是两个自然数
    {
        cin >> a >> b;
        if (a > 0 && b > 0)  // 自然数应该大于0
        {
            m = a;
            n = b;
            break;
        }
        else
            cout << "请重新输入两个自然数：";
    }
    int yinshu = gongyinshu(m, n);
    int beishu = gongbeishu(m, n);
    cout << "他们的最大公因数是：" << yinshu << endl;
    cout << "他们的最小公倍数是：" << beishu << endl;
    return 0;
}
int gongyinshu(int x, int y) //求最大公因数
{
    int z1 = 1;  // 初始化为1，因为1总是公因数
    for (int i = 1; i <= x && i <= y; i++)
    {
        if ((x % i == 0) && (y % i == 0))
            z1 = i;
    }
    return z1;
}
int gongbeishu(int x, int y) //求最小公倍数
{
    int i = (x > y ? x : y);
    while (true)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;  // 直接返回，不需要存储在局部变量中(这个点我问了很长时间）
        }
        i++;
    }
}