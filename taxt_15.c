#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."



int main15(void)
{
	char name[40];

	printf("What'syour name?");
	scanf("%s", name);
	printf("Hello,%s,%s\n", name, PRAISE);

	//������4.2.3�½ڵ�����
	//�����ǵ�һ�ַ���    ���û�зֿ���ӡ
/*	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name)*/;  //Serrndipity Chance
	//���������11����ĸ��ɣ�ռ����40�����䵥Ԫ��
	// 
	//�����ǵڶ��ַ���   ����ֿ���ӡ

	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	//�������������31����ĸ��ռ��32������ϸ����
	// 
	// 
	//%sת��˵��,scanf()ֻ���ȡ�ַ����е�һ�����ʶ�����һ���仰
	//�ַ������������ź�˫�������������     ������ֻ������ʾһ���ַ�,��˫������˫�����������е����� 
	//strlen() �Ǽ����ַ����е��ַ���    �����ո�ͱ�����
	//sizeof() �Ǽ����ַ����е������ַ���,�������ַ�Ҳ�����ȥ
	// һ�������,������Ҫ����С������ʹ��
	//Ȼ�����ǵķ���ֵ����  %zd

	


return 0;
}