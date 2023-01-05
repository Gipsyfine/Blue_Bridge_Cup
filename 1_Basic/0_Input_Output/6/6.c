/*
输入一个字符，一个数字，一个单精度浮点数，一个双精度浮点数，
按顺序输出它们四个
且数字指定占4个字符宽靠右对齐，单精度浮点数保留2位小数，双精度保留12位小数，
占一行输出、空格分隔
*/
#include <stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    scanf("%c %d %f %lf",&a,&b,&c,&d);
    printf("%c %4d %4.2f %4.12f",a,b,c,d);
    return 0;
}

