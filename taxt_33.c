#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define GALLON_TO_LUTRE 3.785
#define MILE_TO_KM 1.609
int main(void)
{
	double range, oil;
	printf("����������ʻ�����:");
	scanf("%lf", &range);
	printf("��������ʹ���˶�����(����):");
	scanf("%lf", &oil);

	printf("ȼ������:");
	printf("����������Ļ�������� %.1f��1Ӣ��/���ء�\n", range / oil);
	printf("��ŷ�ޣ���Ļ����� :");
	printf("%.1f  1��/ 100����",100*(oil*GALLON_TO_LUTRE)/(range*MILE_TO_KM));



	return 0;
}