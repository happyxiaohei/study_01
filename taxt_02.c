#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main2()
{

	//转移字符就是"\"这个符号
	printf("abc");
	printf("\refg\n");//这里\r是回车的意思  \n 是换行的意思     
	printf("abc");
	printf("\befg\n");//  \b是退格的意思
	printf("\\\n");//这里是要"\\"的意思  就是想打印斜杠的时候必须得两个斜杠来使用
	printf("a = %d\n", '\111');//这里\123是8进制的意思    8进制是直接斜杠就行
	printf("a = %d\n", '\x23');//这里\x23是16进制的意思   16进制是前面有个x就行
	printf("a = \t%d\n", '\x23');//这里\t是键盘tab的意思



	//char ch;
	//printf("请输入一个字符:");
	//scanf("%c", &ch);
	//printf("输入的字符是:%c\n",ch);


	//char a = 'a';
	//char b = 97;
	//printf("%c\n", a);//%c是打印字符
	//printf("%d\n", b);


	return 0;

}