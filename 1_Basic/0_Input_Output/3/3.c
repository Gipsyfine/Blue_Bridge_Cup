//依旧是输入三个整数，要求按照占8个字符的宽度，并且靠左对齐输出
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%-8d",a);
    printf("%-8d",b);
    printf("%-8d",c);
    return 0;
}
