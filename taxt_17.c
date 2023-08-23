#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<limits.h>   //整数限制
#include<float.h>    //浮点型限制

int main17(void)
{
	printf("Some number limits for this system:\n");//这个系统的一些数量限制:
	printf("Biggest int:%d\n",INT_MAX);//最大的整数:2147483647
	printf("Smallest long long :%lld\n",LLONG_MIN);//最小长长 : -9223372036854775808

	printf("One byet = %d bite on this system.\n",CHAR_BIT);
	printf("Largest double :%e\n",DBL_MAX);//最大双份 : 1.797693e+308
	printf("Smallest normal float:%e\N",FLT_MIN);//最小正常浮点数 : 1.175494e-38Nfloat精度 = 6位

	printf("float precision = %d digits\n",FLT_DIG);//浮动eosilon = 1.192093e-07
	printf("float eosilon = %e\n",FLT_EPSILON);


	return 0;
}
