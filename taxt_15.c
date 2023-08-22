#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."



int main15(void)
{
	char name[40];

	printf("What'syour name?");
	scanf("%s", name);
	printf("Hello,%s,%s\n", name, PRAISE);

	//这里是4.2.3章节的内容
	//这里是第一种方法    这个没有分开打印
/*	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name)*/;  //Serrndipity Chance
	//你的名字由11个字母组成，占据了40个记忆单元。
	// 
	//这里是第二种方法   这个分开打印

	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	//赞美这个短语有31个字母，占据32个记忆细胞。
	// 
	// 
	//%s转换说明,scanf()只会读取字符串中的一个单词而不是一整句话
	//字符串常量单引号和双引号是有区别的     单引号只能是显示一个字符,而双引号是双引号里面所有的内容 
	//strlen() 是计算字符串中的字符数    包括空格和标点符号
	//sizeof() 是计算字符串中的所有字符数,包括空字符也计算进去
	// 一般情况下,还是需要加上小括号来使用
	//然后他们的返回值是用  %zd

	


return 0;
}