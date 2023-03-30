// 特别数之和（2019年试题F）
#include <iostream>
using namespace std;

bool judge(int a) // 判断一个数是否包含2或0或1或9
{
    while(a!=0)
    {
        int t = a%10;
        if(t==2||t==0||t==1||t==9) return 1;
        a /= 10;
    }
    return 0;
}

int main()
{
    int i,j,sum=0;
    cin >> i;
    for(j=1;j<=i;j++)
    {
        if(judge(j))
        {
            sum += j;
        }
    }
    cout << sum << endl;
    return 0;
}
