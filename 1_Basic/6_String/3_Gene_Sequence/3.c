// 为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的DNA进行比对，以判断该比对的DNA是否具有相关性。

// 现比对两条长度相同的DNA序列。首先定义两条DNA序列相同位置的碱基为一个碱基对，如果一个碱基对中的两个碱基相同的话，则称为相同碱基对。接着计算相同碱基对占总碱基对数量的比例，如果该比例大于等于给定阈值时则判定该两条DNA序列是相关的，否则不相关。

// 输入格式
// 有三行，第一行是用来判定出两条DNA序列是否相关的阈值，随后2行是两条DNA序列（长度不大于500）。
// 输出格式
// 若两条DNA序列相关，则输出“yes”，否则输出“no”。

// 样例输入
// 0.85
// ATCGCCGTAAGTAACGGTTTTAAATAGGCC
// ATCGCCGGAAGTAACGGTCTTAAATAGGCC
// 样例输出
// yes
#include <stdio.h>
#include <string.h>
#define N 501

int main()
{
    double n,m;
    int i,sum=0;
    char a[N];
    char b[N];
    scanf("%lf\n",&n);//哇你是真离谱啊！少个\n导致输入数据频频失败
    gets(a);          //缓存区？
    gets(b);
    int len = strlen(a);
    for(i=0;i<len;i++) {
        if(a[i]==b[i]) {
            sum+=1;
        }
    }
    m = 1.0*sum/len;
    if(m>=n) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
// #include<stdio.h>
// #include<string.h>
// #define N 501
// int main()
// {
// 	double a;
// 	double ratio;	//计算相同碱基对占总碱基对数量的比例
// 	int count=0;	//统计相同碱基对的数量
// 	char b[N];
//  char c[N];
// 	scanf("%lf\n",&a);
// 	gets(b);
// 	gets(c);
// 	for(int i=0;i<strlen(b);i++)
// 	{
// 		if(b[i]==c[i])
// 			count++;
// 	}
// 	ratio=(count*1.0)/strlen(b);
// 	if(ratio>=a)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// 	return 0;
// }
