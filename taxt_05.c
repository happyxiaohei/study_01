#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main5()
{
	float g, h;
	float tax, rate;
	rate = 0.08;
	g = 1.0e5;
	tax = rate * g;
	h = g + tax;
	printf("You owe $%f plus $%f in taxes for total of $%f.\n", g, tax, h);
	//int x = 100;
	//printf("dec = %d; octal =%o; hex = %x\n",x,x,x);
	//printf("dec = %d; octal =%#o; hex = %#x\n",x,x,x);
	//

	//float weight;//�����������غͰ׽�
	//float value;

	//printf("Are you worth weight in platinum?\n");
	//printf("Let's check it out.\n");
	//printf("Please entrt your weight in pounds:\n");

	////��ȡ�û�����
	//scanf("%f", &weight);
	////����׽�ļ۸���ÿ��˾$1700
	////14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
	//value = 1700.0 * weight * 14.5833;
	//printf("Your weight in platinum is worth $%.2f.\n", value);//�����%.2f���ھ�׼�������������ֻ��ʾС�������λ
	//printf("You are easily worth that! If platinum prices drop,\n");
	//printf("eat more to maintain your value.\n");

	getchar();


	return 0;
}