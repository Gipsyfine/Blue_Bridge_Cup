// 日期问题（2017年试题G）

#include <stdio.h>
#include <stdlib.h>

int m_dp[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int m_dr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int data[3][3]; // 保存输入的数据
int i;

int leapyear(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    else
        return 0;
}

void check(int y,int m,int d)
{
    if(y >= 60) y+=19*100;
    else y+=20*100;

    if(m>12) return;

    if(leapyear(y))
    {
        if(d>m_dr[m-1]) return;
    }
    else
    {
        if(d>m_dp[m-1]) return;
    } 

    if(i>0)
    {
        for(int j=0;j<i;j++)
        {
            if(data[j][0]==y && data[j][1]==m && data[j][2]==d)
                return;
        }
    }
    data[i][0] = y;
    data[i][1] = m;
    data[i][2] = d;
    i++;
}

int main()
{
    int a,b,c,e,f,g,j,k;
    int d[3];
    i = 0;
    scanf("%d/%d/%d",&a,&b,&c);
    check(a,b,c);
    check(c,a,b);
    check(c,b,a);

    for(j=0;j<i;j++)
    {
        d[j] = data[j][0] * 10000 + data[j][1] * 100 + data[j][2]; // 
    }
    qsort(d,i); // 从小到大排序
    for(k=0;k<i;k++)
    {
        e = d[k] / 10000;
        f = (d[k]/100)%100;
        g = d[k]%100;
        printf("%d-%02d-%02d\n",e,f,g);
    }

    return 0;

}
