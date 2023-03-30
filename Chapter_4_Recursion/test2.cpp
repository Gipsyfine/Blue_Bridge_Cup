// 递推和递归
// 案例：铺方格

// 递归法
#include <iostream>
using namespace std;

int pu(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return pu(n-1) + pu(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << pu(n) << endl;
    return 0;
}
