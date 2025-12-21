#include "mytriangle.h"
#include <math.h>  // 保留你熟悉的 math.h

bool is_valid(double side1, double side2, double side3)
{
    // 检查所有边长是否为正数
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
        return false;

    // 检查三角形不等式
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
        return true;
    else
        return false;
}

double area(double side1, double side2, double side3)
{
    double s = (side1 + side2 + side3) / 2;
    double mianji = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return mianji;
}