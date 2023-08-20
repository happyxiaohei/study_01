#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>   //这里是头文件   这里std是标准的意思   后面的io 是库的意思
#include<stdlib.h>  // 这里lib是系统库的意思
int main1()
{
	system("calc");//这里是调用windows下计算器的应用    calc  是调用计算器的意思
	return 0;
}



//int main()   
//{
//	printf("这是第一个程序\n");   //printf 是打印输出的函数   \n  表示回车换行.
//	return 0;
//}

//接下来是数据类关键字
// char   字符型   占用1个字节
// short  短整型   占用2个字节
// int    整型     占用4个字节
// long   长整型   占用4个字节
// long long 
// float  单浮点型
// double 双浮点型
// struct 结构体
// uninon 联合体 共用体
// enum   枚举类型
// signed 有符号数
// unsigned 无符号数
// void  空类型   这个比较特殊
//










//这里目前还有一个问题  就是在一个文件里  
//有一个项了以后,继续重新创建一个相,会导致文件调试输出出现错误,这个需要记住

//int main()
//{
//	//const  ---   常属性
//	//const 修饰的常属性
//	//#define  定义的标识符常量
//	//枚举常量     有值   不可被更改
//	//关键字   enum
//	// 
//	// 
//	//1.字面常量
//	//2.const   修饰的常量
//	//3.#define   定义的标识符常量
//	//4.enum   枚举常量   定义过后是不能改的     
//
//	return 0;
//}
//
//
//	/*const int num = 4;
//	printf("%d/n", num);
//	num = 8;
//	printf("%d/n", num);*/
//


//int main()
//{
	//字符串类型   转义字符   注释
	// 单引号  是代表字符的意思   双引号  是代表字符串的意思
	// %s  是代表打印字符的意思
	// %d  是代表打印整型的意思
	// 数组末尾都会有个\0 在里面,    也可以放0   但是一般都是放\0   因为这样的表达式才是算是字符串结束的标志
	// 字符串的结束标志是一个\0的转义字符   在计算字符串长度的时候  \0是结束标志  不能算作字符串的内容
	// 数据在计算机存储的时候    存储的是二进制     
	// ASCLL 编码  码值
	// strlen   是计算字符串长度的   要使用这个功能的话 需要加一个头文件   #include<string.h>    相当于在文件前面添加一个库的意思
	// "\"(斜杠)转义字符是转变原来的意思
	// \\可以抵消转义字符的作用
	// \t  是代表着水平制表符   功能是和键盘上Tab功能一样
	// \n是代表换行的意思
	// 
	// 
	// 
	// 
	// 

//	printf("你好\n");
//	printf("1\n");
//	printf("2\n");
//	printf("3\n");
//	printf("4\n");
//	printf("5\n");
//	//再次测试一下更改github.com 的数据流程是否正确
//	//那么流程应该是  先点击提交或储存  然后在同步  这样就能在网站上同步更新代码情况了
//
//	printf("测试1\n");
//	printf("测试2\n");
//	printf("测试3\n");
//	printf("测试4\n");
//	printf("测试5\n");
//	printf("测试6\n");
//	printf("测试7\n");
//	printf("测试8\n");
//	printf("测试8\n");
//	printf("测试8\n");
//	printf("测试9\n");
//
//	
//	
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//	printf("你好");
//
//	return 0;
//}

