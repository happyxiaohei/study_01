#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main20(void)
{
	const double RENT = 3852.99;   //const   ����
	//  const�ؼ���    �޶�����Ϊֻ��
	
	printf("*%f*\n",RENT);
	printf("*%e*\n",RENT);
	printf("*%4.2f*\n",RENT);
	printf("*%3.1f*\n",RENT);
	printf("*%10.3f*\n",RENT);
	printf("*%10.3Ef*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);

	return 0;
}