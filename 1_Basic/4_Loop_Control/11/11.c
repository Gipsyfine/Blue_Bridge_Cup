// 给定k（1 < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。
// 写程序计算给定的k个正整数中，1，5和10出现的次数。

// 输入格式
// 输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
// 输出格式
// 输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。

// 样例输入
// 5
// 1 5 8 10 5 
// 样例输出
// 1
// 2
// 1
#include <stdio.h>
#define N 100
int main()
{
    int k,m;
    scanf("%d",&k);
    int n[N];
    for ( int i=0; i<k; i++) {
        scanf("%d",&m);
        n[i] = m;
    }
    int s1=0,s2=0,s3=0;
    for ( int i=0; i<k; i++) {
        if ( n[i] == 1 ) {
            s1 += 1;
        } else if ( n[i] == 5 ) {
            s2 += 1;
        } else if ( n[i] == 10 ) {
            s3 += 1;
        }
    }
    printf("%d\n%d\n%d\n",s1,s2,s3);
    return 0;
}