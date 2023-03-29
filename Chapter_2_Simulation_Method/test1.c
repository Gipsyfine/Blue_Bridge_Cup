// 案例：不高兴的津津
#include <stdio.h>
int main()
{
    int i,a,b,c,day=0,max=0;
    for(i = 1;i <= 7; i++)
    {
        scanf("%d %d",&a,&b);
        c = a + b;

        if( c>max && c>8 )
        {
            max = c;
            day = i;
        }
    }
    printf("%d\n",day);
}

// 判断n个数中的最大值 方法
// max = 0;
// for(i = 1;i <= n; i++)
// {
//     scanf("%d",&a);
//     if( a>max )
//     {
//         max = a;
//     }
// }
