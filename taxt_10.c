#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//��Ŀ
//һ���Լ��3.156*10^7��,��дһ������
// ��ʾ�û���������,Ȼ����ʾ�������Ӧ������
//


int main10(void)
{
	int age;
	//�����������������ֵ
	

	printf("�������������:");
	//���û���������
	scanf("%d", &age);
	//���
	//����%.2f����˼��ֻ��ʾС���������λ��
	printf("���任��Ϊ��=:%.2f��\n",age*3.156e7f);
	

	getchar();
	return 0;
}

