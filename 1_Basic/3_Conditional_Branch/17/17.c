//给年份year，定义一个宏，以判别该年份是否闰年。提示：宏名可以定义为LEAP_YEAR，形参为y.
//既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
//输入：一个年份
//输出：根据是否闰年输出，是输出"L",否输出"N"

#define LEAP_YEAR(y) leap(y)
#include <stdio.h>

char leap(int year);
int main()
{
    int year;
    scanf("%d",&year);
    printf("%c",LEAP_YEAR(year));
    
}

char leap(int year)
{
    if ( year%4 == 0 && year%100 != 0 || year%400 == 0) {
        return 'L';
    } else {
        return 'N';
    }
}
