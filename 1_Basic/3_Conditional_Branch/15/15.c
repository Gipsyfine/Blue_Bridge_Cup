//编写一个程序，输入a、b、c三个值，输出其中最大值。
//输入：一行数组，分别为a b c
//输出：a b c其中最大的数
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ( a >= b ) {
        if ( a > c ) {
            printf("%d",a);
        } else {
            printf("%d",c);
        }
    } else {
        if ( b > c ) {
            printf("%d",b);
        } else {
            printf("%d",c);
        }
    }
    return 0;
}
