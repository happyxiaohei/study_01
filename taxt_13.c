#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//��Ŀ:
// ���������������ϵͳ��,һƷ�ѵ�������ˮ,һ�����ڰ˰�˾,һ��˾������������, һ�����׵���3����.
// ��дһ������,��ʾ�û����뱭��,
// ����Ʒ��,��˾,����,����Ϊ��λ��ʾ�ȼ�����,
// ˼�����ڸó���,Ϊ��ʹ�ø������ͱ��������͸��ʺ�?
//



int main13(void)

{
	//����������
	float cup, pint, ounce, spoon, teaspoon;
		//���� Ʒ��  ��˾   ������  ����
	printf("�����뱭��\n");
	scanf("%f", &cup);
	pint = cup / 2;//Ʒ�ѵ�������ˮ
	ounce = cup *8;//8��˾����һ��ˮ
	spoon = ounce * 2;//һ��˾����������
	teaspoon = spoon * 3;//�����׵���һ����

	


	printf("cupˮ:%.2f\npintƷ��:%.2f\nounce��˾:%.2f\nspoon������:%.2f\nteaspoon����:%.2f\n",cup,pint,ounce,spoon,teaspoon);
	/*printf("pint:%f\n,cup:%f\n,ounce:%f\n,spoon:%f\n,teaspoon:%f\n",pint,cup,ounce,spoon,teaspoon);*/

	getchar();

	return 0;

}