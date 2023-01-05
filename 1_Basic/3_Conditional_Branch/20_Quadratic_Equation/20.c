//求方程的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值。
//输入格式：a b c
//输出格式：x1=? x2=?

//样例输入
//4 1 1
//样例输出
//x1=-0.125+0.484i x2=-0.125-0.484i
#include <stdio.h>
#include <math.h>
void bigger(double a,double data,double b);
void zero(double a,double b);
void smaller(double a,double data,double b);

int main()
{
    double a,b,c,data;

    scanf("%lf %lf %lf",&a,&b,&c);
    data=pow(b,2)-4.0*a*c;
    if ( data > 0 ) 
    {
        bigger(a,data,b);
    } 
    else if ( data == 0 ) 
    {
        zero(a,b);
    } 
    else 
    {
        smaller(a,data,b);
    }
    return 0;
}

void bigger(double a,double data,double b)
{
    double x1,x2;
    x1 = (-b + sqrt(data))/(2.0*a);
    x2 = (-b - sqrt(data))/(2.0*a);
    printf("x1=%.3f x2=%.3f\n",x1,x2);
}
void zero(double a,double b)
{
    double x1,x2;
    x1 = -b/(2.0*a);
    x2 = -b/(2.0*a);
    printf("x1=%.3f x2=%.3f\n",x1,x2);

}
void smaller(double a,double data,double b)
{
    double n,m;
    n = -b/(2.0*a);
    m = sqrt(-data)/(2.0*a);
    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n",n,m,n,m);
}
