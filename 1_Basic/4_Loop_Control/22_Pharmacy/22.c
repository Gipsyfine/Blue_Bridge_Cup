#include <stdio.h>
int main()
{
    int m,n,k,x=0;
    scanf("%d %d",&m,&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&k);
        if ( k > m ) {
            x++;
        } else {
            m -= k;
        }
    }
    printf("%d",x);
    return 0;
}
