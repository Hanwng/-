#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char password[10] = {0};
	int ret = 0;
		printf("����������\n");
	scanf("%s", password);
	while((ret=getchar())!='\n')
	{
		;
	}
	printf("��ȷ��(Y/N)\n");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("����ȷ��");

	return 0;
}