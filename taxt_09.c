#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//�����������̾���main���������һ��ע��  ��Ȼ�������в�����
//��Ŀ
//��дһ������,��ȡһ��������,�ȴ�ӡ��С������ʽ,�ٴ�ӡ�� ָ����ʽ.
//Ȼ��,���ϵͳ֧��,�ٴ�ӡ��P������(��ʮ�����Ƽ�����)
//��һ�¸�ʽ���(ʵ����ʾ��ָ��λ����ϵͳ����)
int main9(void)
{
	double num;

	printf("Enter a floating-point value:");
	scanf("%lf", &num);
	//�����Ǵ�ӡ��С������ʽ
	printf("fixed-point notation: %f\n", num);
	//�����Ǵ�ӡ��ָ����ʽ
	printf("exponential notation: %e\n", num);
	//������p������
	printf("p notation:%a\n", num);
	
	return 0;
}