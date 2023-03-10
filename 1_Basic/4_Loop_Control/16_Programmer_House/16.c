// 题目描述
// 某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，
// 现在价格是200万，假设房子价格以每年百分之K增长，
// 并且该程序员未来年薪不变，且不吃不喝，不用交税，每年所得N万全都积攒起来，
// 问第几年能够买下这套房子？（第一年年薪N万，房价200万）

// 输入格式
// 一行，包含两个正整数N（10 <= N <= 50）, K（1 <= K <= 20），中间用单个空格隔开。
// 输出格式
// 如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible。

// 样例输入
// 50 10
// 样例输出
// 8

#include <stdio.h>
int main()
{
    int N,K,i;
    double M = 200.0;
    scanf("%d %d",&N,&K);
    for ( i=1; i<=20; i++ ) {
        if ( N*i > M ) {
            printf("%d",i);
            break;
        } 
        M *= (1+0.01*K);//先判断，后增值
    }
    if ( i == 21 ) {
        printf("Impossible");
    }
    return 0;
}
