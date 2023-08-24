#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main22(void)
{
	int age;//变量
	float asstes;//变量
	char pet[30];    //  字符数组    用用户存储字符串

	printf("Enter your age,assets,and favorite pet.\n");

	scanf("%d  %f", &age, &asstes);//这里要使用"&"

	scanf("%s", pet);   //字符数组不用"&"
	printf("%d $%.2f %s\n",age,asstes,pet);


	
	return 0; 
}