#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main30()
{
	//��Ŀ
	//��ʾ�û���������λÿ��(Mb/s)Ϊ��λ�������ٶȺ������ֽ�(MB)Ϊ��λ���ļ���С
	// ������Ӧ�����ļ�������ʱ��
	// �ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ(�����ٶ�,�ļ���С,����ʱ��)��ʾС�������λ
	
	float speed, size;//(�ٶ�,��С)
	printf("please enter net speed(Mb/s):");
	scanf("%f", &speed);
	printf("please enter net size(Mb):");
	scanf("%f", &size);
	printf("at %.2f megabits per second,", speed);
	printf("a file of %.2f megabytes", size);
	printf("downloads in %.2f seconds.\n", size * 8 / speed);



	return 0;
}