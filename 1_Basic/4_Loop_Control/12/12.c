// 题目描述
// 输出一个整数序列中与指定数字相同的数的个数。

// 输入格式
// 输入包含2行：
// 第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字，中间用一个空格分开；
// 第2行为N个整数，整数之间以一个空格分开。
// 输出格式
// 输出为N个数中与m相同的数的个数。

// 样例输入
// 3 2
// 2 3 2
// 样例输出
// 2

#include <stdio.h>
#define N 100
int main()
{
    int n,m,k,sum=0;
    int h[N];
    scanf("%d %d",&n,&m);
    for ( int i=0; i<n; i++) {
        scanf("%d",&k);
        h[i] = k;
    }
    for ( int i=0; i<n; i++) {
        if ( m == h[i] ) {
            sum += 1;
        }
    }
    printf("%d",sum);
    return 0;
}
