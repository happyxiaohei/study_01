#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

#define PI 3.14159

//������cԤ������
//ʹ�÷�������   #define ����ĳ�������Ҫ��д   Ȼ���ǳ�����ֵ
//������������ͱ�����ͬ,����Ǳ�������ô�д,   ����c_����k_ ǰ׺����ʾ����

int main16(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference= %1.2f ,area= %1.2f\n",circum,area);//����%1.2f����,����������ʾС�������λ

	//#define  �����Զ����ַ����ַ�������    ǰ��ʹ�õ�����,������ʹ��˫����
	//ע��  һ��Ҫ������,��Ȼ����ʾ�������ŵ�����

	//������һ���ؼ���    const   ����������Ļ��� #define  ���ӵ����

	return 0;
}


