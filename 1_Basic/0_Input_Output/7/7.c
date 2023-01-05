//输入一个双精度浮点数，
//输出这个浮点数的%f结果、保留5位小数的结果、%e、%g格式的结果
#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    printf("%f\n",n);
    printf("%.5f\n",n);
    printf("%e\n",n);
    printf("%g\n",n);

    return 0;
}
