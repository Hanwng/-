#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char ret = 0;
	char password[] = {0};
	printf("����������:\n");
	scanf("%s", &password);
	printf("��ȷ�ϣ�Y/N��");
	getchar();
	ret = getchar();
	if (ret = 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("����ȷ��");








	return 0;
}