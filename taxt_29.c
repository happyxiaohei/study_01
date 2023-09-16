#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main29()
{
	//4.编写一个程序，提示用户输入身高和姓名，然后以下面的格式显示用户刚刚输入的信息：
	//Dabney, you are 6.208feet tall.
	//	使用float类型，并用 / 作为除号。

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