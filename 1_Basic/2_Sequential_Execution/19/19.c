//输入两个正整数A和B，求A*B。
//一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
//一个整数，即A*B的值。
#include <stdio.h>
int main()
{
    int a,b;
    unsigned long long int sum;
    scanf("%d %d",&a,&b);
    sum = a*b;
    printf("%lu",sum);
    return 0;
}
