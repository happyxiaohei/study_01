#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#define	ADJUST 7.31
//°ÑÐ¬Âë  9   ×ª»»³É  10.31Ó¢´ç,
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("shoe size (men's)   foot length\n");
//	printf("%12.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}


int main34()
{
	const double SCALE = 0.333;
	double shoe, foot;

	shoe = 3.0;

	while (shoe<18.5)
	{
	foot = SCALE * shoe + ADJUST;
		printf("shoe size (men's)   foot length\n");
		printf("%12.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0; 

	}
	printf("if the shoe fits,wear it. \n");
	return 0;
}