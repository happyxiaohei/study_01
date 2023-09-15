#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main28()
{
	//3.编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出（系统不同，指数记数法显示位数可能不同）：
	//a.The input is 21.3 or 2.1e+001
	//b.The input is + 21.290 or 2.129E+001
	double num,num2;

	//这里double 双精度浮点型,   对应的是%lf   
	//假如用的是float  单精度浮点型的话  对应的才是%f

	//不然就会出现输入值错误,还会引起长须崩溃
	printf("please enter a floating-poing value:");
	scanf("%lf   %lf", &num,&num2);
	printf("a. The input is %.1f or %.1e.\n",num, num);
	printf("b. The input is %+.3f or %.3E.\n",num2, num2);





	return 0;
}