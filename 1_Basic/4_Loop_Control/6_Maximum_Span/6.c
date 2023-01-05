//给定一个长度为n的非负整数序列，
//请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。

//输入：一共2行，第一行为序列的个数n（1 <= n <= 1000)，
//第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。

//输出一行，表示序列的最大跨度值。

// 样例输入
// 6
// 3 0 8 7 5 9
// 样例输出
// 9

#include <stdio.h>
#define N 1000
int main()
{
    int n,m;
    int t[N];
    scanf("%d",&n);

    for ( int i=0; i<n; i++) {
        scanf("%d",&m);
        t[i] = m;
    }
    int min = t[0];
    int max = t[0];

    for (int i=1; i<n; i++) {
        if ( max < t[i] ) {
            max = t[i];
        }
        if ( min > t[i] ) {
            min = t[i];
        }
    }
    printf("%d",max-min);
    return 0;
}
