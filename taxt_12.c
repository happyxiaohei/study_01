#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//题目
// 一英寸相当于2.54厘米,
// 编写一个程序,提示用户输入身高(英寸),
// 然后以厘米为单位显示身高
//
int main12(void)
{
	//设置一个变量来接收用户输入的值
	float stature;
	
	printf("请输入你的身高:(厘米cm)");
	scanf("%f", &stature);

	printf("你的身高等于:%.2f(英寸)", stature / 2.54);

	getchar();
	return 0;
}