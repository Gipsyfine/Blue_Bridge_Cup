#include <stdio.h>
int main()
{
    int n;
    int temp,sum;  
    
    while (scanf("%d",&n) && n) // 输入值且值不为零
    {
        sum = 0;
        while(n--){
            scanf("%d",&temp);
            sum += temp;           
        }
        printf("%d\n",sum);
          
    }
    return 0;
}
