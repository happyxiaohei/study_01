#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>//������ͷ�ļ�


////2.8
////�޸ĺ�Ĵ���
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
//�鿴�������
//int main()
//(      �ֺŴ���   Ӧ����{}�������
//	int n, int n2, int n3;   ��������������ȫ������   int n,n2,n3;   ����д
//
//n = 5;
//n2 = n * n;
//n3 = n2 * n2;
//printf("n =%d,n squared = %d,n cubed = %D\n",n.n2.n3)  �������˸��ֺ�
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
void butler(void)//����void�����ſյ���˼
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
//int main()// ��2ӢѰ(��ˮ��ĵ�λ)ת����Ӣ��
//{
//	int feet, fathoms;  //������������������
//						//����ʹ�ÿ���,��ߴ���Ŀɶ���
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet int %d fathoms!\n",feet,fathoms);
//	return 0;
//}
//
//





////2.1
//int main()//�����Ǻ�����
//{
//	int num;  //����һ����Ϊnum�ı���
//	num = 1100;//�����������ֵ
//	printf("I am a simple");  //����û�м�\n   ���Դ�ӡ�����ľ���û�л���
//	printf("computer.\n"); //������˸�\n�Ǵ����Ż��е���˼
//	printf("My favorite number is %d  because it is first.\n", num);//�����%d����˼����ʲô��ʽ����num���ֵ   ����������������ӡ
//
//	getwchar(); 
//	return 0;//�����ǽ���main()������Ҫ��,����ֵΪ0
//}