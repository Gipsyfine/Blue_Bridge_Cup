#include<iostream>
using namespace std;
 
typedef long long ll;
 
ll n;
 
ll C(ll q,ll x) // 该函数用来计算组合数
{
    ll ans=1;
    for(int i=1,j=q-x+1;i<=x;i++,j++) 
    {
        ans=ans*j/i;
        if(ans>n) return ans;
    }
    return ans;
}
 
ll check(ll x)           //定义二分查找函数
{
    ll l=2*x,r=n,q;
    while(l<=r)
    {
        ll mid=l+(r-l)/2; 
        q=C(mid,x);
        if(q>n) r=mid-1;
        else if(q<n) l=mid+1;
        else 
        {
            cout<<(1+mid)*mid/2+x+1<<endl;
            return 1;
        }
    }
    return 0;
}
 
int main()
{
    cin>>n; // 输入一个整数n
    for(int i=14;~i;i--) //从大到小枚举 
    {
        if(check(i)) break; // 调用check函数，找到答案即退出循环
    }
    return 0;
}

// 2023.3.30
// 这题暂时属于知识盲区
// 等以后再来尝试解决
