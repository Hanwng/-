#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int line = 0;
	printf("�����ѧ\n");

	while (line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("�õ���offer");
	return 0;




}
