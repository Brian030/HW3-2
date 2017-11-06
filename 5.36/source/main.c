#include <stdio.h>
#include <stdlib.h>

void hanoi(int, int, int, int);

int main(void)
{
	int i, a, b, c;
	printf("輸入要移動的碟子數: ");
	scanf_s("%d", &i);
	printf("輸入碟子開始時所在的柱子: ");
	scanf_s("%d", &a);
	printf("輸入碟子最後移往的柱子: ");
	scanf_s("%d", &b);
	printf("輸入當作暫存區的柱子: ");
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
