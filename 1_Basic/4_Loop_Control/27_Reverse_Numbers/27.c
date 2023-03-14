// 给定一个整数，要求从个位开始分离出它的每一位数字。

// 输入格式
// 输入一个整数，整数在1到100000000之间。

// 输出格式
// 从个位开始按照从低位到高位的顺序依次输出每一位数字。
// 数字之间以一个空格分开。

// 样例输入
// 123
// 样例输出
// 3 2 1
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n) {
        printf("%d ",n%10);
        n /= 10;
    }
    return 0;
}

//与28.c作对照