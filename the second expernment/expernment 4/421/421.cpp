#include <iostream>
using namespace std;
// (1) 修正
void test1()
{
    int i, j, * pi, * pj;     //此处的*表示定义指针变量，不是间接运算符
    pi = &i;
    pj = &j;
    i = 5; j = 7;
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
}
// (2) C++（因为C++中没有printf）
void test2()
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //将数组a首地址给p
    for (i = 0; i < 3; i++)
        cout << a[i] << "," << p[i] << "," << *(p + i) << "," << *(a + i) << endl;
}
// (3) 递归函数（好难啊……）
void f(char* st, int i)
{
    st[i] = '\0';
    cout << st << endl;   // 输出当前字符串
    if (i > 1) f(st, i - 1);
}
// (4) 修正：使用动态内存分配，需要咱手动释放内存
int* f()
{
    int* list = new int[4];  // 使用new创建动态数组
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;
}
int main()
{
    cout << "Test 1:" << endl;
    test1();
    cout << endl;

    cout << "Test 2:" << endl;
    test2();
    cout << endl;

    cout << "Test 3:" << endl;
    char st[] = "abcd";
    f(st, 4);
    cout << endl;
    cout << "Test 4:" << endl;
    int* p = f();  // 获取动态分配的数组
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;  // 释放动态分配的内存
    cout << endl;

    return 0;
}