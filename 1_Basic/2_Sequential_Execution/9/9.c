//给出圆的半径，求圆的直径、周长和面积。
//输入包含一个实数r（0 < r <= 10,000），表示圆的半径。
//输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。
#include <stdio.h>
int main()
{
    double r,d,p,s;
    double pi = 3.14159;
    scanf("%lf",&r);
    d = 2.0*r;
    p = 2.0*pi*r;
    s = pi*r*r;
    printf("%.4f %.4f %.4f",d,p,s);

    return 0;
}
