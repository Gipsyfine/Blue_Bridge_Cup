//给出一个等差数列的前两项a1，a2，求第n项是多少。
//输入：一行，包含三个整数a1，a2，n。-100 <= a1,a2 <= 100，0 < n <= 1000。
//输出：一个整数，即第n项的值。
#include <stdio.h>
int main()
{
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    n = a1 + (n - 1)*(a2-a1);
    printf("%d",n);
    return 0;
}
