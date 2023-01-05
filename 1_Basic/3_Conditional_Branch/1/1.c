//给定一个整数N，判断其正负。
//输入：一个整数N(-10 9 <= N <= 10 9)
//输出：
//如果N > 0, 输出positive；
//如果N = 0, 输出zero；
//如果N < 0, 输出negative。

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if ( n > 0 ) {
        printf("positive");
    } else if ( n == 0 ) {
        printf("zero");
    } else {
        printf("negative");
    }
    return 0;
}
