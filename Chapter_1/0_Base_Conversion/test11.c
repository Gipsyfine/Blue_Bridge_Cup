// 时间显示（2021年试题F）
// 对于所有评测用例，给定的时间均不超过1e18的正整数。
// 采用unsigned long long类型，可以表示的最大整数为2^64-1=18446744073709551615。

#include <stdio.h>

unsigned long long n;
int main()
{
    scanf("%llu", &n);
    // scanf("%lld", &n); // %lld和%llu都可以
    int day = 24 * 60 * 60 * 1000;
    n = n % day; // 去除天数
    n = n / 1000; // 去除毫秒
    int sec = n % 60; // 秒
    n = n / 60; // 去除秒
    int min = n % 60; // 分
    n = n / 60; // 去除分
    int hour = n; // 时
    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}

// %02d表示输出的整数占2位，不足2位的在前面补0。
