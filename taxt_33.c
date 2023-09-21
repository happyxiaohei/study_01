#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define GALLON_TO_LUTRE 3.785
#define MILE_TO_KM 1.609
int main(void)
{
	double range, oil;
	printf("请输入您行驶的里程:");
	scanf("%lf", &range);
	printf("请输入您使用了多少油(加仑):");
	scanf("%lf", &oil);

	printf("燃油消耗:");
	printf("在美国，你的机油损耗是 %.1f。1英里/加仑。\n", range / oil);
	printf("在欧洲，你的机油是 :");
	printf("%.1f  1升/ 100公里",100*(oil*GALLON_TO_LUTRE)/(range*MILE_TO_KM));



	return 0;
}