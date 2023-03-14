#include <stdio.h>
int main(void)
{
    int a = 12,b = 012,c = 0x12;
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    printf("a = %d,b = %o,c = %x\n",a,b,c);
    return 0;
}

// 十进制以数字1~9开头，八进制以数字0开头，十六进制以数字0x(或0X)开头
// 二进制不能在C语言中直接书写
