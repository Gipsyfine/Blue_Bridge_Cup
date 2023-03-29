// 纪念日（2020年试题B）
#include <iostream>
using namespace std;

bool leapyear(int y) // 判断是否是闰年
{
    if((y%4==0&&y%100!=0)||y%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i,sum,n;
    n = 365 * 24 * 60; // 一年的分钟数

    sum = 12 * 60; // 1921年7月23日的分钟数

    sum += 161 * 24 * 60; // 1921年剩余的分钟数

    for(i = 1922;i <= 2019;i++) // 1922年到2019年的分钟数
    {
        if(leapyear(i))
        {
            sum += n + 24 * 60;
        }
        else
        {
            sum += n;
        }

    }

    sum += 182 * 24 * 60 + 12 * 60; // 2020年剩余的分钟数
    cout << sum << endl;
    return 0;

}
