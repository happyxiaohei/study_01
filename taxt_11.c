#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//��Ŀ
//һ��ˮ���ӵ�����Ϊ3.0*10^-23��,1����ˮ��Լ��950��ˮ
// ��дһ������,��ʾ�û�����ˮ�Ŀ�����,����ʾˮ���ӵ�����
//



int main11(void)
{
	//����һ�������������û������ֵ
	float water_yield;

	printf("������ˮ�Ŀ�����:");
	scanf("%f",&water_yield);
	printf("%f����ˮ�к���ˮ����%.1f��", water_yield, water_yield * 950/(3e-23));

	getchar();
	return 0;
}