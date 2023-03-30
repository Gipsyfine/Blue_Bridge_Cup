// 等差素数数列（2017年试题B）
#include <iostream>
#include <string.h>
using namespace std;

const int N = 10000;
bool flag[N+1];

void Prime()
{
    memset(flag, true, sizeof(flag));
    for(int i=2;i<=N;i++)
    {
        if(flag[i])
        {
            for(int j=i+i;j<=N;j+=i)
            {
                flag[j] = false;
            }
        }
    }
}

bool ok(int n,int cha)
{
    for(int i=0;i<10;i++)
    {
        if(!flag[n+i*cha])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    Prime();
    for(int cha=2;;cha++)
    {
        for(int i=2;i<N;i++)
        {
            if(flag[i]&&ok(i,cha))
            {
                cout << cha << endl;
                return 0;
            }
        }
        
    }

    return 0;
}

// 暂时看不懂
// 2023.3.30
