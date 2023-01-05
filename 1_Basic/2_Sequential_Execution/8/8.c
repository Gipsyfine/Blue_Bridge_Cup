//输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数。
#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    b = 5.0*(a-32)/9.0;
    printf("c=%.2f",b);
    return 0;
}
