// 题目描述
// 救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及每个屋顶的坐标和人数都将由输入决定，求出所有人都到达大本营并登陆所用的时间。
// 在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将人送回大本营。
// 坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表示。
// 救生船每次从大本营出发，以速度50 米/分钟驶向下一个屋顶，达到一个屋顶后，救下其上的所有人，每人上船1分钟，船原路返回，达到大本营，每人下船0.5 分钟。
// 假设原点与任意一个屋顶的连线不穿过其它屋顶。

// 输入格式
// 第一行，一个整数，表示屋顶数n。
// 接下来依次有n 行输入，每一行上包含两个表示屋顶相对于大本营的平面坐标位置的实数（单位是米）、一个表示人数的整数，数之间以一个空格分开。
// 输出格式
// 一行，救援需要的总时间，精确到分钟 (向上取整)。

// 样例输入
// 1
// 30 40 3
// 样例输出
// 7
#include <stdio.h>
#include <math.h>
#define N 100
int main()
{
    int k,n,i;
    double x,y,sum;
    double p[N];
    scanf("%d",&k);
    for (i=0; i<k; i++) {
        scanf("%lf %lf %d",&x,&y,&n);
        p[i] = sqrt(pow(x,2)+pow(y,2))/50*2+n*(1.5);
    }
    for (i=0; i<k; i++) {
        sum += p[i]; 
    }
    printf("%d",(int)sum+1);//向上取整
    return 0;
}
