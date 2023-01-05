// 题目描述
// 给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。
// 如果没有，输出no。

// 输入格式
// 一个字符串，长度小于100000。
// 输出格式
// 输出第一个仅出现一次的字符，若没有则输出no。

// 样例输入
// abcabd
// 样例输出
// c
#include <stdio.h>
#define N 100001
char a[N];
int main()
{
	gets(a);
	int i,j;
	int flag=0;
	for(i=0;a[i];i++){//不太理解用数组元素作条件的原因?
		for(j=0;a[j];j++){
			if(a[i]==a[j]&&i!=j){
				flag=1;
				break;//发现相同的字符，跳出当前循环，不必进行之后的比较 
			}
		}
		if(flag==0){//当flag为0时，输出a[i]，并且跳出当前循环 
			printf("%c",a[i]);
			break;
		}
		else if(flag==1&&a[i+1]==0)//当flag为1且为最后一重循环时，输出"no" 
		{
			printf("no");
		}
		flag=0;//每次比较前需将flag重置为0 
	}
	return 0;
}
