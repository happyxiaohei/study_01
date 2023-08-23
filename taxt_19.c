#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define PI 3.141593

int main19(void)
{
	int munber = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", munber, pies);
	printf("The value of pi is %f .\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);


	int pc = 2 * 6;
	printf("如果要打印百分号的话  %d %%  (两个百分号就能打印了) ", pc);

	return 0;
}
//
//	The 7 contestants ate 12.750000 berry pies.
//		The value of pi is 3.141593 .
//		Farewell!thou art too dear for my possessing,
//		$15600
//
//   转换说明一定要与后面的每个项相匹配   不然程序会出错

