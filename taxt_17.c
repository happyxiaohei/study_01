#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<limits.h>   //��������
#include<float.h>    //����������

int main17(void)
{
	printf("Some number limits for this system:\n");//���ϵͳ��һЩ��������:
	printf("Biggest int:%d\n",INT_MAX);//��������:2147483647
	printf("Smallest long long :%lld\n",LLONG_MIN);//��С���� : -9223372036854775808

	printf("One byet = %d bite on this system.\n",CHAR_BIT);
	printf("Largest double :%e\n",DBL_MAX);//���˫�� : 1.797693e+308
	printf("Smallest normal float:%e\N",FLT_MIN);//��С���������� : 1.175494e-38Nfloat���� = 6λ

	printf("float precision = %d digits\n",FLT_DIG);//����eosilon = 1.192093e-07
	printf("float eosilon = %e\n",FLT_EPSILON);


	return 0;
}
