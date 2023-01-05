//2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。
//现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。

//输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，
//每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。

//输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。

// 样例输入
// 3
// 1 0 3
// 3 1 0
// 0 3 0
// 样例输出
// 4 4 3 11
#include <stdio.h>
#define N 100
int main()
{
    int n,a1,a2,a3;
    scanf("%d",&n);
    int h[N][3];
    for ( int i=0; i<n; i++) {
        scanf("%d %d %d",&a1,&a2,&a3);
        h[i][0] = a1;
        h[i][1] = a2;
        h[i][2] = a3;
    }
    int s1=0,s2=0,s3=0;
    for ( int i=0; i<n; i++) {
        s1 += h[i][0];
        s2 += h[i][1];
        s3 += h[i][2];
    }
    printf("%d %d %d %d",s1,s2,s3,s1+s2+s3);
    return 0;
}
