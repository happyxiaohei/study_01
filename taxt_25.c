#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main(void)
{
	char name_ming[999], name_xing[999];    //�������������Ϊ�˴����ַ���    
	//Ȼ��  �ַ����Ĵ����������������   ��Ȼ����
	printf("�����������:\n");
	scanf("%s", name_ming);
	printf("�����������:\n");
	scanf("%s", name_xing);
	printf("���������:%s\t%s", name_ming, name_xing);


	return 0;
}