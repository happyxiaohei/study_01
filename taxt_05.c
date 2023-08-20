#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main5()
{
	float g, h;
	float tax, rate;
	rate = 0.08;
	g = 1.0e5;
	tax = rate * g;
	h = g + tax;
	printf("You owe $%f plus $%f in taxes for total of $%f.\n", g, tax, h);
	//int x = 100;
	//printf("dec = %d; octal =%o; hex = %x\n",x,x,x);
	//printf("dec = %d; octal =%#o; hex = %#x\n",x,x,x);
	//

	//float weight;//声明变量体重和白金
	//float value;

	//printf("Are you worth weight in platinum?\n");
	//printf("Let's check it out.\n");
	//printf("Please entrt your weight in pounds:\n");

	////获取用户输入
	//scanf("%f", &weight);
	////假设白金的价格是每盎司$1700
	////14.5833用于把英镑常衡盎司转换为金衡盎司
	//value = 1700.0 * weight * 14.5833;
	//printf("Your weight in platinum is worth $%.2f.\n", value);//这里的%.2f用于精准控制输出浮点数只显示小数点后两位
	//printf("You are easily worth that! If platinum prices drop,\n");
	//printf("eat more to maintain your value.\n");

	getchar();


	return 0;
}