#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main7(void)
{
	int ascll;//����һ�������������û������ֵ

	printf("Please enter the ASCLL value.\n");//��δ������˼;������һ��ASCLL��ֵ

	scanf("%d", &ascll);//���û�����һ��intֵ   ����һ��Ҫ"&"������ż��ڱ���ǰ��

	printf("%d ASCLL = %c", ascll, ascll);//�û������ֵ=ASCLL��Ӧ��ֵ

	return 0;
}