//将一个整型变量的值赋给一个布尔型变量，
//再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,c;
    bool b;
    scanf("%d",&a);
    b = a;
    c = b;
    printf("%d",c);
    
    return 0;
}
