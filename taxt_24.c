#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main24()
{
	int n;

	printf("please enter three integers:\n");
	scanf("%*d  %*d  %*d  %*d   %*d  %*d  %*d %d", &n);   //�������%*d ����˼����������ַ�����˼       ������%d������Ҫ��ֵ��λ��
	printf("the last integer was %d\n.", n);

	   
	  
	return 0;
} 