//输入一个三位数，分离出它的百位、十位和个位，反转后输出。
//有多组输入数据
//输入测试数据占一行，一个数字n(100<=n<=999)

//输出三个整数占一行表示答案
#include <stdio.h>
int main()
{
    int a;
    int n[3];
    while (scanf("%d",&a) == 1){
        n[0] = a/100;
        n[1] = a%100/10;
        n[2] = a%100%10;
        printf("%d%d%d\n",n[2],n[1],n[0]);
    }
    
    return 0;
}
