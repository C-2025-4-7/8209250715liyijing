#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
    cout << "Celsius  Fahrenheit | Fahrenheit   Celsius" << endl;
    for (double a = 40.0, b = 120.0; a >= 31.0 && b >= 30.0; a--, b -= 10)
    {
        cout << fixed << setprecision(1) << setw(6) << a
            << setw(10) << celsius_to_fah(a) << "   |"
            << setw(10) << b
            << setw(9) << setprecision(2) << fahrenheit_to_cels(b) << endl;
    }
    return 0;
}