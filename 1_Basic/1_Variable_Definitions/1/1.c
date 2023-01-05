//变量在定义后未进行赋初值之前，里面存储的是一个随机数，也叫垃圾值。
//分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
#include <stdio.h>
int main()
{
    int a;
    short b;
    printf("%d %d",sizeof(a),sizeof(b));
    return 0;
}
