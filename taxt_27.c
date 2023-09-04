#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int main(void)
{
	//题目
	// 
	// 编写一个程序，提示用户输入名字，并执行以下操作：
	//	a.打印名字，包括双引号；
	//	b.在宽度为20的字段右端打印名字，包括双引号；
	//	c.在宽度为20的字段左端打印名字，包括双引号；
	//	d.在比姓名宽度宽3的字段中打印名字

	char name[20];

	printf("please enter your name:");
	scanf("%19s", name);//这里的19现阶段加不加都可以,代表着字符最多读取20个字符,但是为什么写19呢  因为还里面还有一个\0这个字符在变量里面
	//所以数组有20个的话    scanf就得%20-1s  这样的操作才行
	printf("print your name:\n");
	printf("a.\"%s\"\n", name);//这里是打印所有字符   没有宽带
	printf("b.\"%20s\"\n", name);//这里是从左往右开始数20
	printf("c.\"%-20s\"\n", name);//这里是从右往左开始数20
	printf("d.%*s\n", strlen(name)+3,name);//这里strlen是在打印的字符前面加3个空字符





	return  0;
}