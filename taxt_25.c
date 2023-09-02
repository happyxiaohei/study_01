#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main(void)
{
	char name_ming[999], name_xing[999];    //这里添加数组是为了储存字符串    
	//然后  字符串的储存必须是在数组内   不然报错
	printf("请输入你的姓:\n");
	scanf("%s", name_ming);
	printf("请输入你的名:\n");
	scanf("%s", name_xing);
	printf("你的姓名是:%s\t%s", name_ming, name_xing);


	return 0;
}