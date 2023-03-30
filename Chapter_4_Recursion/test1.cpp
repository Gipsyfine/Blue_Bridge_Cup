// 递推和递归
// 案例：铺方格

// 递推法
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    a[1] = 1;
    a[2] = 2;
    for(int i=3;i<=n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << endl;
    return 0;
}
