#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main26(void1)
{
	//��Ŀ,��дһ������,��ʾ�û�����������,Ȼ����"��,��"�ĸ�ʽ��ӡ���� 

	char gn[15], fn[15];
	printf("what's ur given name and family name\?\n");
	//scanf_s("%s %s", gn, 15, fn, 15);
	// 2015֮��ʹ��scanf_s����scanf����Ҫ�ڶ����ַ������͵ı��������������С��������scanf_s�Ĳ���15����ʹ��sizeof���������
	// ����ʼʱ��printf�������ݷ��͵��˻�������������1������������2�������ַ���3����Ҫ���������Ż�ˢ�»����������´�ӡ�����
	//

	//  ���������÷���ʱ��Ƚϲ���_s Ϊ��԰�ȫһЩ.���ǿ���ֲ�Ա��
	//����ʹ�õĻ������ױ���,��������ķ��������ױ���
	scanf("%s %s", gn,  fn );
	printf("print: %s ,%s", gn, fn);

	getchar();
	getchar();

	return 0;
}