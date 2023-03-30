// 数的分解（2019年试题D）
#include <iostream>
using namespace std;

// judge() 函数用于判断一个数是否包含2或4
bool judge(int a)
{
    while(a!=0)
    {
        int t = a%10;
        if(t==2||t==4) return 0;
        a /= 10;
    }
    return 1;
}

int main()
{
    int sum=0;
    for(int i=1;i<2019;i++)
    {
        if(judge(i))
        {
            for(int j=i+1;j<2019-i-j;j++)
            {
                if(judge(j)&&judge(2019-i-j))
                {
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
}
