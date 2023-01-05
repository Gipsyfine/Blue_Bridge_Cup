/*
还记得我们曾经输出过的“Hello, World!”吗？

我们可以用sizeof函数获得它所占用的空间大小。

请编程求出它的大小，看看跟你设想的是否一样？

*/
#include <stdio.h>
int main()
{
    char a[] = "Hello, World!";
    printf("%d",sizeof(a));
    // printf("%d",sizeof("Hello, World!"));
    return 0;
}

    
