//班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。
//输入：第一行有一个整数n（1<= n <= 100），表示学生的人数。其后n行每行有1个整数，表示每个学生的年龄，取值为15到25
//输出：输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。

// #include<stdio.h>
// int main()
// {
//     int n,a,sum=0,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a);
//         sum+=a;
//     }
//     printf("%.2f",sum*1.0/n);
// }

#include <stdio.h>
int main()
{
    int n,k,a,sum = 0;
    scanf("%d",&n);
    k = n;
    while ( k-- ) {//最好不要直接用n--
        scanf("%d",&a);
        sum += a;
    }   
    printf("%.2f",sum*1.0/n);//因为这里要用n

    return 0;
}


//
