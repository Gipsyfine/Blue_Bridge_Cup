//输入一个字符，输出由这个字符组成等腰三角形
//底为5个，高为3个。
#include <stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    printf("  %c  \n",n);
    printf(" %c%c%c \n",n,n,n);
    printf("%c%c%c%c%c\n",n,n,n,n,n);
    return 0;
}

//有点丑-_-|||
