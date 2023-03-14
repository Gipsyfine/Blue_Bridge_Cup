#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    char arr[100];
    int n = 0;
    while(num > 0) // 二进制数的转换：除2取余法
    {
        arr[n++] = num % 2 + '0';
        num /= 2;
    }

    for(int i = n - 1;i >= 0;i--) // 逆序输出
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    return 0;
}

// 二进制数据的表示：常用的方法是采用字符数组的方式
// 上述例子实现了将一个十进制数转换成二进制数并存储在字符数组中
