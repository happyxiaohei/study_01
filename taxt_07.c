#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main7(void)
{
	int ascll;//定义一个变量来接受用户输入的值

	printf("Please enter the ASCLL value.\n");//这段代码的意思;请输入一个ASCLL的值

	scanf("%d", &ascll);//等用户输入一个int值   这里一定要"&"这个符号加在变量前面

	printf("%d ASCLL = %c", ascll, ascll);//用户输入的值=ASCLL对应的值

	return 0;
}