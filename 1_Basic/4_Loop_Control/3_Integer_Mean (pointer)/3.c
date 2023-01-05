/*
编写函数，求包含n个元素的整数数组中元素的平均值。
要求在函数内部使用指针操纵数组元素，其中n个整数从键盘输入，输出为其平均值。 

（样例说明：5为输入数据的个数，3  4  0  0  2  是以空格隔开的5个整数）
*/

//输入：第一行一个数n，表示元素个数,第二行依次输入n个元素，空格分开
//输出：n个元素的平均值

//样例输入：
//5
//3 4 0 0 2
//样例输出：
//1

#include <stdio.h>
#define N 100

int average(int a,int *p);
int main()
{
    int a,n;
    scanf("%d",&a);
    int m[N];
    for ( int i=0; i<a; i++) {
        scanf("%d",&n);
        m[i] = n;
    }
    
    printf("%d",average(a,m));

    return 0;
}

int average(int a,int *p)
{  
    int sum=0;
    for ( int i=0; i<a; i++) {
        sum += p[i];
    }
    
    return sum/a;
}

//简单指针操控数组元素!!!
