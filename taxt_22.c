#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main22(void)
{
	int age;//����
	float asstes;//����
	char pet[30];    //  �ַ�����    ���û��洢�ַ���

	printf("Enter your age,assets,and favorite pet.\n");

	scanf("%d  %f", &age, &asstes);//����Ҫʹ��"&"

	scanf("%s", pet);   //�ַ����鲻��"&"
	printf("%d $%.2f %s\n",age,asstes,pet);


	
	return 0; 
}