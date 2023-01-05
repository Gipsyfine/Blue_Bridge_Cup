#include <stdio.h>
int main()
{
    int i,s1,s2=300,s3=0;
    for (i=0;i<12;i++) {
        scanf("%d",&s1);
        if (s2 >= s1) {
            s2 = s2-s1;
            s3 += s2/100*100;
            if (s2 >= 100) {
                s2 = s2%100;
                s2 += 300;
            } else {
                s2 += 300;
            }
        } else {
            printf("-%d",i+1);
            break;
        }
    }
    if (i==12) {
        printf("%.0f",s3*1.2+s2-300);
    }
    
    return 0;
}
//s3是存的钱
//s2是留的钱
//啊啊啊成功啦
//开心
//2022.10.17
