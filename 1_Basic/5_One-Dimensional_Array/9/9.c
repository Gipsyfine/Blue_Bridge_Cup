// 题目描述
// 在线性代数、计算几何中，向量点积是一种十分重要的运算。

// 给定两个n维向量a=(a1,a2,...,an)和b=(b1,b2,...,bn)，求点积a·b=a1b1+a2b2+...+anbn。

// 输入格式
// 第一行是一个整数n。1 <= n <= 1000。
// 第二行包含n个整数a1,a2,...,an。
// 第三行包含n个整数b1,b2,...,bn。
// 相邻整数之间用单个空格隔开。每个整数的绝对值都不超过1000。
// 输出格式
// 一个整数，即两个向量的点积结果。

// 样例输入
// 3
// 1 4 6
// 2 1 5
// 样例输出
// 36
#include <stdio.h>
#define N 1001
int main()
{
    int k,n,m,sum=0;
    int a[N];
    int b[N];
    scanf("%d",&k);
    for(int i=0;i<k;i++) {
        scanf("%d",&n);
        a[i] = n;
    }
    for(int i=0;i<k;i++) {
        scanf("%d",&m);
        b[i] = m;
    }
    for(int i=0;i<k;i++) {
        sum += a[i]*b[i];
    }
    printf("%d",sum);
    return 0;
}
