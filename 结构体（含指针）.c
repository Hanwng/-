#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C���Գ������",55 };
	b1.price = 15;
	strcpy(b1.name, "������Щ��");
	/*printf("%s\n", b1.name);
	printf("%d\n", b1.price);*/
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	return 0;


}