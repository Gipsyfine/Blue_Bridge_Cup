//已知线段的两个端点的坐标A（Xa,Ya），B（Xb，Yb），求线段AB的长度。
//输入中所有实数的绝对值均不超过10000。
//共两行。
//第一行是两个实数Xa，Ya，即A的坐标。
//第二行是两个实数Xb，Yb，即B的坐标。
//输出：一个实数，即线段AB的长度，保留到小数点后3位。
#include <stdio.h>
#include <math.h>
int main()
{
    double Xa,Xb,Ya,Yb;
 
    scanf("%lf %lf",&Xa,&Ya);
    scanf("%lf %lf",&Xb,&Yb);

    printf("%.3f\n",sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb)));
    
    // while ( scanf("%lf %lf",&Xa,&Ya) == 2)
    // {
    //     scanf("%lf %lf",&Xb,&Yb);
    //     printf("%.3f\n",sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb)));
    // }
    return 0;
}
