// 枚举法：百钱买百鸡
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<100;i++) // 100只
    {
        for(j=0;j<100;j++)
        {
            for(k=0;k<100;k++)
            {
                if(i+j+k==100 && 5*i+3*j+k/3==100 && k%3==0)
                printf("公鸡%2d只，母鸡%2d只，小鸡%2d只\n",i,j,k);
            }
        }
    }
    return 0;
}
// %2d表示输出的整数占2位

