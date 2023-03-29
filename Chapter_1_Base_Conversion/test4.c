// 任意进制转换
#include <stdio.h>
#include <string.h>

char* convertBase(char* num, int baseFrom, int baseTo);

int main()
{
    char num[100];
    int baseFrom, baseTo;
    printf("请输入要转换的数: ");
    scanf("%s", num);
    printf("请输入原进制数: ");
    scanf("%d", &baseFrom);
    printf("请输入目标进制数: ");
    scanf("%d", &baseTo);
    printf("%s(%d) 转换为 %s(%d) 是: %s\n", num, baseFrom, num, baseTo, convertBase(num, baseFrom, baseTo));
    return 0;
}

char* convertBase(char* num, int baseFrom, int baseTo)
{
    static char buffer[100]; // 保存转换结果
    char digitMap[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int i, j, numLen = strlen(num);
    int n = 0;
    int m = 1;

    // 先转换为十进制数
    for (i = numLen - 1; i >= 0; i--)
    {
        int digit = strchr(digitMap, num[i]) - digitMap; //strchr()函数返回指向第一次出现的字符的指针
        n += digit * m;
        m *= baseFrom;
    }
    // 从十进制数转换为目标进制数
    i = 0;
    do
    {
        int remainder = n % baseTo;
        buffer[i++] = digitMap[remainder];
        n /= baseTo;
    } while (n > 0);

    buffer[i] = '\0';
    // 反转结果
    for (j = 0; j < i / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }

    return buffer;
}
