#include <iostream>
using namespace std;
int main()
{
	int a, b;//a是天数，b是每天买的个数
	float c = 0;//c是价钱
	for (a = 1, b = 2; b <= 100; b *= 2, a += 1)
	{
		c = c + 0.8 * b;
	}
	cout << "平均每天花" << c / (a - 1) << "元" << endl;
	return 0;
}