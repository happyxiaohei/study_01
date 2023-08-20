#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>//这里是头文件


////2.8
////修改后的代码
//int main()
//{
//	int n, n2,n3;
//
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	
//	printf("n =%d,n squared = %d,n cubed = %d\n", n,n2,n3);
//	return 0;
//}



//2.7
//查看错误代码
//int main()
//(      分号错误   应该用{}这个括号
//	int n, int n2, int n3;   这里声明变量完全可以是   int n,n2,n3;   这样写
//
//n = 5;
//n2 = n * n;
//n3 = n2 * n2;
//printf("n =%d,n squared = %d,n cubed = %D\n",n.n2.n3)  这里少了个分号
//	return 0;
//)
//



//2.6
void butler(void);
int main3()
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	return 0;
}
void butler(void)//这里void代表着空的意思
{
	printf("You rang,sir?\n");
}


//
//2.5
//int main()
//{
//	int feet, fathoms;
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet int %d fathoms!\n", feet, fathoms);
//	printf("Yes,I said %d feet!\n", 6*fathoms);
//
//
//	return 0;
//}

////2.4
//
//int main()// 把2英寻(侧水深的单位)转换成英尺
//{
//	int feet, fathoms;  //这里声明了两个变量
//						//这里使用空行,提高代码的可读性
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet int %d fathoms!\n",feet,fathoms);
//	return 0;
//}
//
//





////2.1
//int main()//这里是函数名
//{
//	int num;  //定义一个名为num的变量
//	num = 1100;//给这个变量赋值
//	printf("I am a simple");  //这里没有加\n   所以打印出来的句子没有换行
//	printf("computer.\n"); //这里加了个\n是代表着换行的意思
//	printf("My favorite number is %d  because it is first.\n", num);//这里的%d的意思是以什么方式调用num这个值   加在哪里就在哪里打印
//
//	getwchar(); 
//	return 0;//这里是结束main()函数的要求,返回值为0
//}