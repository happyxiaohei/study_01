#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main26(void1)
{
	//题目,编写一个程序,提示用户输入名和姓,然后以"名,姓"的格式打印出来 

	char gn[15], fn[15];
	printf("what's ur given name and family name\?\n");
	//scanf_s("%s %s", gn, 15, fn, 15);
	// 2015之后，使用scanf_s代替scanf，需要在读入字符串类型的变量后描述数组大小，本例中scanf_s的参数15可以使用sizeof函数替代。
	// 程序开始时，printf即把内容发送到了缓冲区，遇到（1）缓冲区满（2）换行字符（3）需要输入的情况才会刷新缓冲区，更新打印结果。
	//

	//  上面这种用法暂时相比较不加_s 为相对安全一些.但是可移植性变差
	//而且使用的话会容易报错,还是下面的方法不容易报错
	scanf("%s %s", gn,  fn );
	printf("print: %s ,%s", gn, fn);

	getchar();
	getchar();

	return 0;
}