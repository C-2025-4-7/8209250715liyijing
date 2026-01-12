#include <iostream>
using namespace std;
class Student {
private:
    int id;
    int score;
public:
    void input() {
        cout << "的学号和成绩：";
        cin >> id >> score;
    }
    int getScore() {
        return score;
    }
    int getId() {
        return id;
    }
};
// 函数：找出最高成绩的学生（还怪复杂的其实……）
void max(Student* students) {
    int maxScore = students[0].getScore(); // 假设第一个学生分数最高
    int maxIndex = 0;                     // 记录最高分学生的下标
    for (int i = 1; i < 5; i++) {
        if (students[i].getScore() > maxScore) {
            maxScore = students[i].getScore();
            maxIndex = i;
        }
    }
    cout << "最高成绩的学生学号是：" << students[maxIndex].getId() << endl;
}
int main() {
    Student students[5]; // 创建5个学生对象数组
    for (int i = 0; i < 5; i++) {
        cout << "输入第" << i + 1 << "个学生";
        students[i].input();
    }
    max(students);

    return 0;
}