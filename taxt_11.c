#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//题目
//一个水分子的质量为3.0*10^-23克,1夸脱水大约是950克水
// 编写一个程序,提示用户输入水的夸脱数,并显示水分子的数量
//



int main11(void)
{
	//定义一个变量来接收用户输入的值
	float water_yield;

	printf("请输入水的夸脱数:");
	scanf("%f",&water_yield);
	printf("%f夸脱水中含有水分子%.1f个", water_yield, water_yield * 950/(3e-23));

	getchar();
	return 0;
}