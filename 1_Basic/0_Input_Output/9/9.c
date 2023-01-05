//给定一个字符，用它构造一个对角线长5个字符，
//倾斜放置的菱形。
#include <stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    printf("  %c  \n",n);
    printf(" %c%c%c \n",n,n,n);
    printf("%c%c%c%c%c\n",n,n,n,n,n);
    printf(" %c%c%c \n",n,n,n);
    printf("  %c  \n",n);
    return 0;
}

//有点丑-_-|||
