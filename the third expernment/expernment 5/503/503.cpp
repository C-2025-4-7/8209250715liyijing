#include <iostream>
using namespace std;
class Cuboid
{
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高
public:
    // 输入长宽高
    void input() 
    {
        cout << "请输入长方柱的长、宽、高：";
        cin >> length >> width >> height;
    }
    // 计算体积
    double volume() 
    {
        return length * width * height;
    }
};
int main() 
{
    Cuboid c1, c2, c3;// 创建3个长方柱对象
    // 输入3个长方柱的数据
    c1.input();
    c2.input();
    c3.input();
    // 计算并输出体积
    cout << "第一个长方柱的体积: " << c1.volume() << endl;
    cout << "第二个长方柱的体积: " << c2.volume() << endl;
    cout << "第三个长方柱的体积: " << c3.volume() << endl;
    return 0;
}