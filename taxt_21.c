#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define MANE "����������"

int main(void)
{
	float cash = 888.6885622267;

	printf("The %s family just may be $%.2fricher!.\n",MANE,cash);


	//�����¼����printf()�Ķ���д�� 

	printf("Here's one way to print a ");
	printf("long string.\n");
	//����һ��д��  ��Ϊ��һ���ַ���û�м�\n����   ���Եڶ��н�����һ��ĩβ���

	printf("Here's one way to print a \
long string.\n");
	//���ǵڶ���д��  ע�����  ǰ�治Ҫ�ӿո�  ��Ȼ�ᵼ���ַ�����������Ҳ���пո�
	
	printf("Here's one way to print a"
			"long string.\n");    /*ANSI C */
	//���ǵ�����д��   �ֽ׶ε����  �Ժ�����д��Ӧ�ò�����\

	//����printf()��д��  Ӧ�û��ǵ�һ��д���Ƚϳ���   ��������һ����������õ�


	return 0;
}