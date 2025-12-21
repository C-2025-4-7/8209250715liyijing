#include <iostream>
using namespace std;
unsigned int jisuan(int day);
int main()
{
    cout << "第一天猴子摘了" << jisuan(1) << "个桃子。" << endl;
    return 0;
}
unsigned int jisuan(int day)
{
    unsigned int taozi;  // 使用unsigned int类型保持一致
    if (day == 10)  // 第10天发现只有1个桃子
    {
        taozi = 1;
    }
    else
    {
        taozi = (jisuan(day + 1) + 1) * 2;  // 递归计算
    }
    return taozi;
}