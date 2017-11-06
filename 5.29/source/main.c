#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);

int main(void)
{
	int a, b;
	printf("輸入兩個正整數: ");
	scanf_s("%d%d", &a, &b);
	printf("最小公倍數為: %d\n", lcm(a, b));

	system("pause");
	return 0;
}

int lcm(int a, int b)
{
	int d = a*b;
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	
	d = d / a;
	return d;
}