#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char grand;
	int number;
	int price;
	int amount;
	int i = 0;
	char a = ' ';
	printf("����������Ʒ�ơ�ͨ����š����ۡ�����������ʱ�ÿո������\n");
	rewind(stdin);
	scanf("%c%d%d%d", &grand, &number, &price, &amount);
	printf("%d:", number);
	for (i = 0; i < amount; i++)
	{
		printf("%c", grand);
	}
	printf("%c", a);
	printf("%d", amount);
	return 0;
}