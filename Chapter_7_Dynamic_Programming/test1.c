// 动态规划 兑换硬币
// if (i >= coins[j] && dp[i-coins[j]] != INT_MAX) {
//                 dp[i] = min(dp[i], dp[i-coins[j]] + 1);
//             }
// 这一段是核心代码，如果当前的钱数大于等于硬币的面值，且当前钱数减去硬币的面值，剩下的钱对应的最少硬币数 不为无穷大，那么就可以用 剩下的钱对应的最少硬币数+1 完成兑换，就是当前钱数的最少硬币数
#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int coins[] = {9, 5, 2};
    int n = sizeof(coins) / sizeof(int);
    int dp[22];
    dp[0] = 0;
    for (int i = 1; i <= 21; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (i >= coins[j] && dp[i-coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    printf("最少需要 %d 枚硬币\n", dp[21]);
    return 0;
}

// 题目：目前有9元、5元、2元三种面值的硬币若干枚，现在要找回21元的硬币，则用什么样的
// 组合可以使得兑换的硬币数量最少？
// 利用动态规划解决问题
