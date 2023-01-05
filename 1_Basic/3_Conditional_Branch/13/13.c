/*
编写程序，计算下列分段函数y=f(x)的值。

y=-x+2.5; 0 <= x < 5

y=2-1.5(x-3)(x-3); 5 <= x < 10

y=x/2-1.5; 10 <= x < 20
*/

//输入：一个浮点数N,0 <= N < 20
//输出：N对应的分段函数值：f(N)。结果保留到小数点后三位。

#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if ( 0 <= n && n < 5) 
    {
        printf("%.3f",-n + 2.5);
    } 
    else if ( 5 <= n && n < 10 ) 
    {
        printf("%.3f",2 - 1.5*(n-3)*(n-3));
    } 
    else 
    {
        printf("%.3f",n/2 - 1.5);
    }
    return 0;
}
