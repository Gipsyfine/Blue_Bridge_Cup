#include <stdio.h>
int main()
{

    int n,m,sum; 
    sum = 0; 
    while(scanf("%d",&n) != EOF)//最好用EOF,用0容易时间超限
    {
        sum = 0;
        while(n--) 
        {
            scanf("%d",&m);
            sum += m;
        }
        printf("%d\n",sum);

    }
    
    return 0;
}
