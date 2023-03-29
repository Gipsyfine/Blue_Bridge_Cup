// 卡片（2021年试题B）
#include <iostream>
using namespace std;
int a[10]; // 默认值为0
int main()
{
    for(int i=1;;i++)
    {
        int temp = i;

        while(temp) // 该循环用于统计i中各个数字出现的次数
        {
            a[temp%10]++;
            temp /= 10;
        }

        for(int j=0;j<10;j++)
        {
            if(a[j] > 2021)
            {
                cout << i-1 << endl;
                return 0;
            }
        }
    }


}
