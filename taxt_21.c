#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#define MANE "这里是名字"

int main(void)
{
	float cash = 888.6885622267;

	printf("The %s family just may be $%.2fricher!.\n",MANE,cash);


	//这里记录以下printf()的多种写法 

	printf("Here's one way to print a ");
	printf("long string.\n");
	//这是一种写法  因为第一行字符串没有加\n结束   所以第二行紧跟第一行末尾输出

	printf("Here's one way to print a \
long string.\n");
	//这是第二种写法  注意的是  前面不要加空格  不然会导致字符串内容里面也会有空格
	
	printf("Here's one way to print a"
			"long string.\n");    /*ANSI C */
	//这是第三种写法   现阶段的理解  以后这种写法应该不常用\

	//三种printf()的写法  应该会是第一种写法比较常见   其余两种一般情况不会用到


	return 0;
}