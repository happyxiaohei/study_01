#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//�����ϰ
//�������鱾�ڶ��µı����ϰ��

void jolly(void);
void deny(void);
void br(void);
void ic(void);
void sm(void);
void one_three(void);
void two(void);



int main4()
{
	//ϰ��8
	printf("starting now:\n");
	one_three();
	printf("done!\n");



	//ϰ��7
	sm(), sm(), sm();
	printf("\n");
	sm(), sm();
	printf("\n");
	sm();
	printf("\n");


	//sm(), sm(), sm();   ����б���ô���  ���Ե�����ʾ�����ݲ�����
	//printf("1/n");
	//sm(), sm();
	//printf("1/n");
	//sm();
	//printf("1/n");
	//
	//ϰ��6
	int toes, toes1, toes2;
	toes = 10;
	printf("toes:%d\n", toes);
	printf("toes*2:%d\n", toes * 2);
	printf("toes^2:%d\n", toes * toes);




	//ϰ��5
	//br(), ic();
	//printf("Brazil,Russia\n");

	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();






	//ϰ��4
	jolly();
	jolly();
	jolly();
	deny();
	printf("\n");
	//ϰ��3
	int age, number;
	age = 28;
	number = 365;

	printf("age:%d,mumber:%d\n", age, number * age);


	//ϰ��2 
	printf("name:happy.money\nsite:zhejiangsheng\n");

	//ϰ��1
	printf("happy.money\n");
	printf("happy\nmoney\n");
	printf("happy.money\n");



	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");

}

void br(void)
{
	printf("Brazil,Russia");

}

void ic(void)
{
	printf("India,China");
}

void sm(void)
{
	printf("Smile!");
}

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}