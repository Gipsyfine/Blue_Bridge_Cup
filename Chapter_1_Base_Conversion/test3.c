// 十进制转二进制

#include <stdio.h>
//#include <string.h>
#define MAX_LENGTH 32 // 假设最大支持32位二进制数

void decimal_to_binary(int decimal, char *binary)
{
    int i = 0;
    while (decimal > 0) {
        binary[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    binary[i] = '\0'; // 数组以'\0'结尾
 
    //  翻转字符数组
    //int len = strlen(binary);
    for (int j= 0; j < i/2; j++)
    {
        char temp = binary[j];
        binary[j] = binary[i-j-1];
        binary[i-j-1] = temp;
    }
}

int main()
{
    int decimal;
    scanf("%d", &decimal);
    char binary[MAX_LENGTH];
    decimal_to_binary(decimal, binary);
    printf("decimal %d to binary is %s\n", decimal, binary);
}
