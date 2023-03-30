// 枚举法：万钱买万鸡
#include <stdio.h>
int main()
{
    int i,j,k;
    int count=0;
    for(i=0;i<=10000;i++)
    {
        for(k=0;k<=10000;k+=3)
        {
            j = 10000 - i - k;
            if(j>=0 && 5*i+3*j+k/3==10000)
            {
                //printf("公鸡%2d只，母鸡%2d只，小鸡%2d只\n",i,j,k);
                count++;
            }
        }
    }
    printf("共有%d种买法",count);
    return 0;
}
