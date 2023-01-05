//考试中取得的最高分数。
//输入两行，第一行为整数n（1 <= n < 100），表示参加这次考试的人数.第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。
//所有成绩均为0到100之间的整数。

//输出一个整数，即最高的成绩。
// 样例输入
// 5
// 85 78 90 99 60

// 样例输出
// 99
#include <stdio.h>
#define N 100
int main()
{
    int n,k;
    int t[N];

    scanf("%d",&n);
    for ( int i = 0; i<n; i++) {
        scanf("%d",&k);
        t[i] = k;
    }
    int max = t[0];

    for ( int i = 1; i<n; i++) {
        if ( max < t[i] ) {
            max = t[i];
        }    
    }
    printf("%d",max);

    return 0;
}
