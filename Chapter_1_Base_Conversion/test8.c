// 年号字串（2019年试题B）
#include <stdio.h>
int main()
{
    char ch[26];
    char ans[5];
    int index=0,n=2019; // n是年号
    
    for (int i=0;i<26;i++)
    {
        ch[i]='A'+i;
    }

    while(n)
    {
        int t = n%26;
        n = n/26;
        if(t==0)
        {
            t+=26; 
        }
        ans[index++]=ch[t-1];
    }

    for (int i=index-1;i>=0;i--)
    {
        printf("%c",ans[i]);
    }

    return 0;
}

// 一般26进制是从0到25，但是这里是从1开始到26，所以要特殊处理一下
