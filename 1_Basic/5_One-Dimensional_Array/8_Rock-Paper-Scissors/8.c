// 题目描述
// 石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。

// 一天，小A和小B正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，就是以“石头-布-石头-剪刀”为周期不断循环的。请问，小A和小B比了N轮之后，谁赢的轮数多？

// 输入格式
// 输入包含三行。
// 第一行包含三个整数：N，NA，NB，分别表示比了N轮，小A出拳的周期长度，小B出拳的周期长度。0 < N,NA,NB < 100。
// 第二行包含NA个整数，表示小A出拳的规律。
// 第三行包含NB个整数，表示小B出拳的规律。
// 其中，0表示“石头”，2表示“剪刀”，5表示“布”。相邻两个整数之间用单个空格隔开。
// 输出格式
// 输出一行，如果小A赢的轮数多，输出A；如果小B赢的轮数多，输出B；如果两人打平，输出draw。

// 样例输入
// 10 3 4
// 0 2 5
// 0 5 0 2
// 样例输出
// A
#include <stdio.h>
#define H 101
int main()
{
    int N,NA,NB,i,j;
    int counta=0,countb=0;
    int a[H];
    int b[H];
    scanf("%d %d %d",&N,&NA,&NB);
    for (i=0;i<NA;i++) 
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<NB;i++) 
    {
        scanf("%d",&b[i]);
    }
    
    //这段秀
    for(i=NA,j=0;i<N;i++,j++)
    {
        a[i]=a[j];
    }
    for(i=NB,j=0;i<N;i++,j++)
    {
        b[i]=b[j];
    }
    //

    for(int i=0;i<N;i++)
    {
        if(a[i]==0 && b[i]==2 || a[i]==2 && b[i]==5 || a[i]==5 && b[i]==0)
            counta++;
        if(a[i]==0 && b[i]==5 || a[i]==2 && b[i]==0 || a[i]==5 && b[i]==2)
            countb++;
    }
    if(counta>countb) {
        printf("A");
    } else if (counta<countb) {
        printf("B");
    } else {
        printf("draw");
    }
    return 0;
}
