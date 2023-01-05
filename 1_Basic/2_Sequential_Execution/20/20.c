//给定非负整数n，求2n。
//输入：一个整数n。0 <= n < 31。
//输出：一个整数，即2的n次方。
#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int n,m;
    scanf("%u",&n);
    m = pow(2,n);
    printf("%u",m);
    return 0;
}
