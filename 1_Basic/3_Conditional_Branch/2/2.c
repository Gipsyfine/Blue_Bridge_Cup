//输入一个浮点数，输出这个浮点数的绝对值。
//输入一个浮点数，其绝对值不超过10000。
//输出这个浮点数的绝对值，保留到小数点后两位。
#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if ( n >= 0 ) {
        printf("%.2f",n);
    } else {
        printf("%.2f",-n);
    }
    
    return 0;
}
