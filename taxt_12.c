#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//��Ŀ
// һӢ���൱��2.54����,
// ��дһ������,��ʾ�û��������(Ӣ��),
// Ȼ��������Ϊ��λ��ʾ���
//
int main12(void)
{
	//����һ�������������û������ֵ
	float stature;
	
	printf("������������:(����cm)");
	scanf("%f", &stature);

	printf("�����ߵ���:%.2f(Ӣ��)", stature / 2.54);

	getchar();
	return 0;
}