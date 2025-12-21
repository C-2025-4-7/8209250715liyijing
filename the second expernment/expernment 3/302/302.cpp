#include <iostream>
using namespace std;
bool zhishu(int x);
int main()
{
    int count = 1;  // 素数计数器，从1开始
    for (int i = 2; count <= 200; i++)  // 找前200个素数
    {
        if (zhishu(i))
        {
            cout << i << '\t';
            if (count % 10 == 0)  // 每10个数换行
            {
                cout << endl;
            }
            count++;  // 找到一个素数就增加计数
        }
    }
    return 0;
}
bool zhishu(int x)
{
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;
    for (int y = 3; y * y <= x; y += 2)
    {
        if (x % y == 0)
        {
            return false;
        }
    }
    return true;
}