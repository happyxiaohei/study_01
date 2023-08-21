#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>  //提供strlen()函数原型
#define DENSITY 62.4  //人体密度(单位:磅/立方英尺)  这段代码指的是   用c预处理器把字符常量DENSITY定义为62.4
#define PRAISE "You are an extraordinary being."
int main()
{
	//float weight, volume;
	//int size, letters;
	//char name[40];  //name 是一个容纳40个字符的数组

	//printf("Hi What's your first name?\n");
	//scanf("%s", name);
	//printf("%s ,what's  your weight in pounds?\n",name);
	//scanf("%f", &weight);
	//size = sizeof name;
	//letters = strlen( name);  //这里用c函数strlen()获取字符串长度
	//volume = weight / DENSITY;
	//printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	//printf("Also,your first name has %d letters,\n", letters);
	//printf("and we have %d bytes to store it.\n",size);



	//数组的容量必须至少比待存储字符串中的字符数多1    因为需要一个空间放着给" \0 "这个空字符
	//

	char name[40];

	printf("What'syour name?");
	scanf("%s", name);
	printf("Hello,%s,%s\n", name, PRAISE);//%s转换说明,scanf()只会读取字符串中的一个单词而不是一整句话

	//字符串常量单引号和双引号是有区别的     单引号只能是显示一个字符,而双引号是双引号里面所有的内容 







	return 0;
}
