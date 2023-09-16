#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main30()
{
	//题目
	//提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单位的文件大小
	// 程序中应计算文件的下载时间
	// 该程序要以下面的格式打印3个变量的值(下载速度,文件大小,下载时间)显示小数点后两位
	
	float speed, size;//(速度,大小)
	printf("please enter net speed(Mb/s):");
	scanf("%f", &speed);
	printf("please enter net size(Mb):");
	scanf("%f", &size);
	printf("at %.2f megabits per second,", speed);
	printf("a file of %.2f megabytes", size);
	printf("downloads in %.2f seconds.\n", size * 8 / speed);



	return 0;
}