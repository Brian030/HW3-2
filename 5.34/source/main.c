#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main(void)
{
	int a, b;
	printf("輸入兩個整數a b,計算a的b次方: ");
	scanf_s("%d%d", &a, &b);
	printf("%d的%d次方是: %d\n", a, b, power(a, b));

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