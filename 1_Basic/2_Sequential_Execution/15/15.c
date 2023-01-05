//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，
//假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
#include <stdio.h>
int main()
{
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    if ( y%x == 0 ) {
        n = n - y/x;
    } else {
        n = n - y/x - 1;
    }
    printf("%d",n);
    return 0;
}
