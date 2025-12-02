#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b;
    cout << "ÅóÓÑ£¬ÊäÈë»ªÊÏÎÂ¶È£º" << endl;
    cin >> a;
    b = 5 * (a - 32) / 9;
    cout << "ÉãÊÏÎÂ¶ÈÎª£º" << fixed << setprecision(2) << b << endl;
    return 0;
}