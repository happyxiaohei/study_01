#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define SQUARES 64  //  棋牌中的方格
int main()
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	printf("square    grains    tatal    ");
	printf("fraction of  \n");
	printf("          addeb     geains");
	printf(" world total\n");
	total = current = 1.0;   //从第一颗谷物开始算起
	printf("%4d %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e  %12.2e  %12.2e\n", count, current, total, total / CROP);

	} 

	printf("that's all.\n");

	return 0;
}