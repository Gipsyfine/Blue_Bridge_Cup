// 题目描述
// 输入一行字符，统计出其中数字字符的个数。

// 输入格式
// 一行字符串，总长度不超过255。
// 输出格式
// 输出为1行，输出字符串里面数字字符的个数。

// 样例输入
// Peking University is set up at 1898.
// 样例输出
// 4
#include <stdio.h>
#define N 255
int main()
{
    int i,j=0;
    char a[N];
    gets(a);//gets()函数
    for (i=0;a[i]!='\0';i++) {
        if('0'<=a[i] && a[i]<='9') {
            j++;
        }
    }
    printf("%d",j);
    return 0;
}
