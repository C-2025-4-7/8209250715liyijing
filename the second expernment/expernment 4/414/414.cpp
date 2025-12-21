#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) 
{
    int i = 0, j = 0, k = 0;  // 分别指向list1, list2, list3的当前位置
    // 比较两个数组的元素，将较小的放入结果数组
    while (i < size1 && j < size2) 
    {
        if (list1[i] <= list2[j]) 
        {
            list3[k] = list1[i];
            i++;
        }
        else 
        {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }
    // 将list1剩余元素复制到list3
    while (i < size1) 
    {
        list3[k] = list1[i];
        i++;
        k++;
    }
    // 将list2剩余元素复制到list3
    while (j < size2) 
    {
        list3[k] = list2[j];
        j++;
        k++;
    }
}
int main() 
{
    int list1[80], list2[80], list3[160];
    int size1, size2;
    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; i++) 
    {
        cin >> list1[i];
    }
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; i++) 
    {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3); // 合并两个数组
    cout << "The merged list is ";// 输出合并后的数组
    for (int i = 0; i < size1 + size2; i++) 
    {
        cout << list3[i];
        if (i < size1 + size2 - 1) 
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}



