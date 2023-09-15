#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main()
{
	char name [30];
	float height;

	printf("请输入姓名和身高,以\"姓名 身高(cm)\"的格式输入");
	scanf("%29s", name);
	//printf("Hello %s ,huw tallyou are (inch)\n:", name);//这个是请输入英尺的意思
	printf("Hello %s ,huw tallyou are (cm)\n:", name);//这个是请输入厘米的意思
	scanf("%f", &height);
	//printf("%s,you are %.3f feet tall\n", name, height / 12.0);//这个是英尺
	printf("%s,you are %.3f feet tall\n", name, height / 100);//这个是厘米

	


	return 0;
}