#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//接下来的流程就是main后面的数字一定注意  不然程序运行不起来
//题目
//编写一个程序,读取一个浮点数,先打印成小数点形式,再打印成 指数形式.
//然后,如果系统支持,再打印成P计数法(即十六进制计数法)
//按一下格式输出(实际显示的指数位数因系统而异)
int main9(void)
{
	double num;

	printf("Enter a floating-point value:");
	scanf("%lf", &num);
	//这里是打印成小数点形式
	printf("fixed-point notation: %f\n", num);
	//这里是打印成指数形式
	printf("exponential notation: %e\n", num);
	//这里是p计数法
	printf("p notation:%a\n", num);
	
	return 0;
}