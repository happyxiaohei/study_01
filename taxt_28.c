#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main28()
{
	//3.��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾλ�����ܲ�ͬ����
	//a.The input is 21.3 or 2.1e+001
	//b.The input is + 21.290 or 2.129E+001
	double num,num2;

	//����double ˫���ȸ�����,   ��Ӧ����%lf   
	//�����õ���float  �����ȸ����͵Ļ�  ��Ӧ�Ĳ���%f

	//��Ȼ�ͻ��������ֵ����,�������������
	printf("please enter a floating-poing value:");
	scanf("%lf   %lf", &num,&num2);
	printf("a. The input is %.1f or %.1e.\n",num, num);
	printf("b. The input is %+.3f or %.3E.\n",num2, num2);





	return 0;
}