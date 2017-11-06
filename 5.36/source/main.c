#include <stdio.h>
#include <stdlib.h>

void hanoi(int, int, int, int);

int main(void)
{
	int i, a, b, c;
	printf("��J�n���ʪ��Фl��: ");
	scanf_s("%d", &i);
	printf("��J�Фl�}�l�ɩҦb���W�l: ");
	scanf_s("%d", &a);
	printf("��J�Фl�̫Ჾ�����W�l: ");
	scanf_s("%d", &b);
	printf("��J��@�Ȧs�Ϫ��W�l: ");
	scanf_s("%d", &c);

	hanoi(i, a, c, b);

	system("pause");
	return 0;
}

void hanoi(int i, int a, int c, int b)
{
	if (i == 1)
	{
		printf("%d -> %d\n", a, b);
	}
	else
	{
		hanoi(i - 1, a, b, c);
		printf("%d -> %d\n", a, b);
		hanoi(i - 1, c, a, b);
	}
}
