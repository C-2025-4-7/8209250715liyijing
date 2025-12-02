#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.1415926535;
	float r, h, V;
	cout << "ÅóÓÑ£¬ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶£º" << endl;
	cin >> r;
	cout << "ÅóÓÑ£¬ÇëÊäÈëÔ²×¶µÄ¸ß£º" << endl;
	cin >> h;
	V = (PI * (r * r) * h) / 3;
	cout << "Ô²×¶µÄÌå»ýÎª£º" << V << endl;
	return 0;
}