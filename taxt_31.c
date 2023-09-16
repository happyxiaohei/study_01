#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main31(void)
{
	int x, y;
	char fname[20], lname[20];

	printf("please enter your first name; ");
	scanf("%19s", fname);
	printf("please enter your first name; ");
	scanf("%19s", lname);
	x = strlen(fname);//strlen 是计算字符串长度的意思
	y = strlen(lname);
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", x, x, y, y);
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", x, x, y, y);


	return 0;

}