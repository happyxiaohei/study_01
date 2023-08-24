#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main24()
{
	int n;

	printf("please enter three integers:\n");
	scanf("%*d  %*d  %*d  %*d   %*d  %*d  %*d %d", &n);   //这里这个%*d 的意思是跳过这个字符的意思       最后这个%d才是想要的值的位置
	printf("the last integer was %d\n.", n);

	   
	  
	return 0;
} 