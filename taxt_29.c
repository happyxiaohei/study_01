#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main()
{
	char name [30];
	float height;

	printf("���������������,��\"���� ���(cm)\"�ĸ�ʽ����");
	scanf("%29s", name);
	//printf("Hello %s ,huw tallyou are (inch)\n:", name);//�����������Ӣ�ߵ���˼
	printf("Hello %s ,huw tallyou are (cm)\n:", name);//��������������׵���˼
	scanf("%f", &height);
	//printf("%s,you are %.3f feet tall\n", name, height / 12.0);//�����Ӣ��
	printf("%s,you are %.3f feet tall\n", name, height / 100);//���������

	


	return 0;
}