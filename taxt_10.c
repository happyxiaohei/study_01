#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//题目
//一年大约有3.156*10^7秒,编写一个程序
// 提示用户输入年龄,然后显示该年龄对应的秒数
//


int main10(void)
{
	int age;
	//定义变量来接收年龄值
	

	printf("请输入你的年龄:");
	//让用户输入年龄
	scanf("%d", &age);
	//结果
	//这里%.2f的意思是只显示小数点后面两位数
	printf("年龄换算为秒=:%.2f秒\n",age*3.156e7f);
	

	getchar();
	return 0;
}


