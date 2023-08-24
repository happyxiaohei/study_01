#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


int main23(void)
{

	//这个例子是printf     这个符号"*" 的作用
	unsigned width, precision;
	int number = 25886;
	double weight = 242.5966645;

	printf("enter a field width:\n");
	scanf("%d", &width);
	printf("the num is :%*d:\n", width, number);
	printf("now enter a width and a precision:\n");
	scanf("%d  %d", &width, &precision);
	printf("weigth = % *.*f\n", width, precision, weight);   //  这里这样写可以指定显示小数点后面几位数
	printf("done!\n");


	return 0;
}