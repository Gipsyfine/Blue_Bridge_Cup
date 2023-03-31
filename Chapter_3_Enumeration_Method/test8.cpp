// 完全二叉树的权值（2019年试题G）
#include <iostream>
#include <math.h>
using namespace std;

const int N = 100010;
long long a[N],maxsize=-0x3f3f3f; // -0x3f3f3f
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    int res;
    for(int i=1;i<=n;i*=2) // 从第一层开始遍历 i<=n是为了防止溢出
    {
        long long s = 0;
        for(int j=i;j<=i*2-1 && j<=n;j++) // j是第i层的第j个节点 j<=n是为了防止溢出
        {
            s += a[j];
        }
        if(s>maxsize) // 更新最大值
        {
            maxsize = s;
            res = (int)log2(i) + 1;
        }
    }
    cout << res << endl;
    return 0;
}

/*
"-0x3f3f3f" 是一个负的十六进制数常量，它通常用作初始化一个变量或数组中的最小值。
这个值在计算机编程中被广泛使用，特别是在竞赛编程中。
它的十进制值是 -4,278,190，这个值非常小，可以被认为是负无穷大的近似值。
将变量或数组初始化为这个值可以确保在后续的计算中，任何比它更小的值都可以被正确地更新，从而避免了出现错误。
需要注意的是，-0x3f3f3f只是一个约定俗成的值，并不是标准的语言特性或常量。
它的使用方式和具体含义也可能因编程语言和上下文而有所不同。
*/
