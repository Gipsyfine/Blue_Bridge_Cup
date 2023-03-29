// 练习1：月份天数

#include <stdio.h>
#include <stdbool.h> // bool类型

bool leapyear(int y) // 判断是否是闰年
{
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        return true;
    else
        return false;
}
int main()
{
    int y,m;
    scanf("%d %d", &y, &m);
    int m_dp[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int m_dr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    if (leapyear(y))
    {
        printf("%d\n", m_dr[m-1]);
    }
    else
    {
        printf("%d\n", m_dp[m-1]);
    }
    return 0;

}
