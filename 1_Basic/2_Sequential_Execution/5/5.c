//两个整数a和b分别作为分子和分母，既分数 a/b ，
//求它的浮点数值（双精度浮点数，保留小数点后9位）。
#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.9lf",a/b);

    return 0;
}
