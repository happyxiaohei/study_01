#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main2()
{

	//ת���ַ�����"\"�������
	printf("abc");
	printf("\refg\n");//����\r�ǻس�����˼  \n �ǻ��е���˼     
	printf("abc");
	printf("\befg\n");//  \b���˸����˼
	printf("\\\n");//������Ҫ"\\"����˼  �������ӡб�ܵ�ʱ����������б����ʹ��
	printf("a = %d\n", '\111');//����\123��8���Ƶ���˼    8������ֱ��б�ܾ���
	printf("a = %d\n", '\x23');//����\x23��16���Ƶ���˼   16������ǰ���и�x����
	printf("a = \t%d\n", '\x23');//����\t�Ǽ���tab����˼



	//char ch;
	//printf("������һ���ַ�:");
	//scanf("%c", &ch);
	//printf("������ַ���:%c\n",ch);


	//char a = 'a';
	//char b = 97;
	//printf("%c\n", a);//%c�Ǵ�ӡ�ַ�
	//printf("%d\n", b);


	return 0;

}