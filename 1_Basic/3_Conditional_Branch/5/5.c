//输入两个整数，比较它们的大小。
//输入：
//一行，包含两个整数x和y，中间用单个空格隔开。
//0 <= x < 2^32, -2^31 <= y < 2^31。
//输出：
//一个字符。
//若x > y，输出 > ；
//若x = y，输出 = ；
//若x < y，输出 < 。
#include <stdio.h>
int main()
{
    unsigned int x;
    int y;
    scanf("%u %d",&x,&y);
    if ( x > y ) {
        printf(">");
    } else if ( x == y ) {
        printf("=");
    } else {
        printf("<");
    }
    return 0;
}
