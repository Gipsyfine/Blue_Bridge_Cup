#include <stdio.h>
int main()
{
    int n,m;
    int temp,sum; 
    scanf("%d",&n) ;
    while (n--)
    {
        sum = 0;
        scanf("%d",&m) ;
        while(m--){
            scanf("%d",&temp);
            sum += temp;           
        }
        printf("%d\n",sum);
          
    }
    return 0;
}
