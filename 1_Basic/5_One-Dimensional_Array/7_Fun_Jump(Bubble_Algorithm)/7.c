// 题目描述
// 一个长度为n（n>0）的序列中存在“有趣的跳跃”当前仅当相邻元素的差的绝对值经过排序后正好是从1到(n-1)。例如，1 4 2 3存在“有趣的跳跃”，因为差的绝对值分别为3,2,1。当然，任何只包含单个元素的序列一定存在“有趣的跳跃”。你需要写一个程序判定给定序列是否存在“有趣的跳跃”。

// 输入格式
// 一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，各元素的绝对值均不超过1,000,000,000。
// 输出格式
// 一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。

// 样例输入
// 4 1 4 2 3
// 样例输出
// Jolly
#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    int a[N];
    int b[N];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    
    if (n==1) {
        printf("Jolly");
    } else {
        for(i=0;i<n-1;i++) {        //输入n个数则会有n-1个差值
            b[i] = abs(a[i]-a[i+1]);   
        }

        int min=0;
        for(i=0;i<n-1;i++){         //一共排序n-1轮
            for(j=1;j<n-1;j++){     //冒泡排序
                if(b[j]<b[j-1]){
                    min=b[j];
                    b[j]=b[j-1];
                    b[j-1]=min;
                }
            }
        }

        int flag=0;
        for(i=0;i<n-1;i++){
            if(b[i+1]-b[i]==1) {
                flag++;
            } else {
                break;
            }  
        }
        if(flag==n-2)
            printf("Jolly");
        else{
        printf("Not jolly");
        }
    }
    return 0;
}
