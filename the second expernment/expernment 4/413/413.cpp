#include <iostream>
using namespace std;
void change(bool* ip[100]);// bool类型，咱最开始写错了……
int main()
{
    bool L[100];
    bool* L_change[100];
    for (int a = 0; a < 100; a++)//最开始所有柜门都是关闭的
    {
        L[a] = false;
        L_change[a] = &L[a];
    }
    change(L_change);
    cout << "开启的柜门编号为：";
    for (int e = 0; e < 100; e++)
    {
        if (L[e] == true)
            cout << e + 1 << " ";// 空格分隔,咱也可以用'\t'制表符代替，但空格太大了，不太美观
    }
    cout << endl;
    return 0;
}
void change(bool* ip[100])
{
    for (int c = 1; c <= 100; c++)//c代表第几个学生
    {
        for (int d = c; d <= 100; d = d + c)//d代表第几个柜子
        {
            *ip[d - 1] = !(*ip[d - 1]);
        }
    }
}



