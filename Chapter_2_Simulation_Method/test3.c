// 整除序列（2020年试题F）
#include <stdio.h>
int main()
{
    unsigned long long i;
    scanf("%llu",&i);
    while(1)
    {
        printf("%llu ",i);
        i /= 2;
        if(i==0) break;
    }
}
