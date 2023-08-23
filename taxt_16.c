#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

#define PI 3.14159

//常量和c预处理器
//使用方法是用   #define 后面的常量名是要大写   然后是常量的值
//常量命名规则和变量相同,但是潜规则是用大写,   或者c_或者k_ 前缀来表示常量

int main16(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference= %1.2f ,area= %1.2f\n",circum,area);//这里%1.2f表明,四舍五入显示小数点后两位

	//#define  还可以定义字符和字符串常量    前者使用单引号,后者则使用双引号
	//注意  一定要加引号,不然会显示不加引号的内容

	//这里有一个关键字    const   这个用起来的话比 #define  更加的灵活

	return 0;
}


