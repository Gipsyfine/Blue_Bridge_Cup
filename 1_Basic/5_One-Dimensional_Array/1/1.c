// 题目描述
// 输出一个整数序列中与指定数字相同的数的个数。

// 输入格式
// 输入包含三行：
// 第一行为N，表示整数序列的长度(N <= 100)；
// 第二行为N个整数，整数之间以一个空格分开；
// 第三行包含一个整数，为指定的整数m。
// 输出格式
// 输出为N个数中与m相同的数的个数。

// 样例输入
// 3
// 2 3 2
// 2
// 样例输出
// 2
#include <stdio.h>
int main()
{
    int n,i,k,sum=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); 
    }
    scanf("%d",&k);
    for (i=0;i<n;i++) {
        if (a[i]==k) {
            sum +=1;
        }
    }
    printf("%d",sum);
    return 0;
}
