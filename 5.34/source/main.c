#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main(void)
{
	int a, b;
	printf("��J��Ӿ��a b,�p��a��b����: ");
	scanf_s("%d%d", &a, &b);
	printf("%d��%d����O: %d\n", a, b, power(a, b));

	system("pause");
	return 0;
}

int power(int a, int b)
{
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	else
		return (a*power(a, b - 1));

}