//分别定义bool，char类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
#include <stdio.h>
#include <stdbool.h>//bool
int main()
{
    bool a;
    char b;
    printf("%d %d",sizeof(a),sizeof(b));
    return 0;
}
