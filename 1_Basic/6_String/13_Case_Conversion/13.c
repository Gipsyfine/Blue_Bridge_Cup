// 题目描述
// 读入一些字符串，将其中的小写字母转成大写字母（其他字符不变）。

// 输入格式
// 输入为多行，每行为一个字符串，字符串只由字母和数字组成，长度不超过80。
// 输入以“EOF”结束。

// 输出格式
// 对于每行输入，输出转换后的字符串。

// 样例输入
// Hello
// ICPC2004
// 12345abcde
// 样例输出
// HELLO
// ICPC2004
// 12345ABCDE
#include <stdio.h>
#include <string.h>
#define N 80
int main()
{
    int i;
    char a[N];
    while(scanf("%s",a)!= EOF ) {
        for(i=0;i<strlen(a);i++) {
            if('a'<=a[i] && a[i]<='z') {
                a[i] -= 32;
            }
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
