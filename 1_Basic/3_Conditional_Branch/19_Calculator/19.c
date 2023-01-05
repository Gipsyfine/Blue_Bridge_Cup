/*
使用Switch语句编写一个模拟简单计算器的程序。
依次输入两个整数和一个字符，并用空格隔开。如果该字符是一个“+”，则打印和；
如果该字符是一个“-”，则打印差；如果该字符是一个“*”,则打印积；
如果该字符是“/”，则打印商；如果该字符是一个  “%”，则打印余数。
打印结果后输出一个空行。
*/

//样例输入：3 4 +
//样例输出：7
#include <stdio.h>
int main()
{
    int x,y;
    char a;
    scanf("%d %d %c",&x,&y,&a);

    switch (a) 
    {
        case '+':
            printf("%d\n\n",x+y);
            break;
        case '-':
            printf("%d\n\n",x-y);
            break;
        case '*':
            printf("%d\n\n",x*y);
            break;
        case '/':
            printf("%d\n\n",x/y);
            break;
        case '%':
            printf("%d\n\n",x%y);
            break;
    }
    return 0;
}
