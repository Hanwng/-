#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("*******************************\n");
	printf("*******1��play     2,exit******\n");
	printf("*******************************\n");
}

void game()
{
	printf("�������");
	int ret = rand()%100+1;
	/*printf("%d", ret);*/
	do
	{
		printf("����������:");
		int i = 0;
		scanf("%d",&i);
		if (i < ret)
			printf("��С��");
		else if (i > ret)
			printf("�´���");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����");
			break;
		}
	} while (1);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}