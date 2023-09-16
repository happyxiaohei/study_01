#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<float.h>

int main(void)
{
	float f_value = 1.0 / 3.0;
	double d_value = 1.0 / 3.0;

	printf("1.0/3.0 display 6 decimal places: \n");
	printf("f_value = %.6f \n d_value = %.6lf \n",f_value,d_value);
	
	printf("1.0/3.0 display 12 decimal places: \n");
	printf("f_value = %.12f \n d_value = %.12lf \n",f_value,d_value);
	
	printf("1.0/3.0 display 16 decimal places: \n");
	printf("f_value = %.16f \n d_value = %.16lf \n",f_value,d_value);

	printf("FLT_DIG = %d , DBL_DIG = %d \n", FLT_DIG, DBL_DIG);

	//FLT_DIG, DBL_DIG其实指的是float和double的精度，也就是有几位小数

	// 不一致,因为float 精确度是6位,而double 精确度是15位,所以在超过精确度位数后会有差异


	return 0;
}