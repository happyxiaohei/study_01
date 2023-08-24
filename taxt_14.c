#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>  //提供strlen()函数原型
#define DENSITY 62.4  //人体密度(单位:磅/立方英尺)  这段代码指的是   用c预处理器把字符常量DENSITY定义为62.4

int main14()
{
	float weight, volume;
	int size, letters;
	char name[40];  //name 是一个容纳40个字符的数组

	printf("Hi What's your first name?\n");
	scanf("%s", name);
	printf("%s ,what's  your weight in pounds?\n",name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen( name);  //这里用c函数strlen()获取字符串长度
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n",size);



	//数组的容量必须至少比待存储字符串中的字符数多1    因为需要一个空间放着给" \0 "这个空字符
	//

	 




	return 0;
}
