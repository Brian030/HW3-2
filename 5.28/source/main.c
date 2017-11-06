#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char in, out;
	printf("請輸入一個字母: ");
	scanf_s("%c", &in);
	if (in < 91)
	{
		out = in + 32;
		printf("%c\n", out);
	}
	if (in > 96)
	{
		out = in - 32;
		printf("%c\n", out);
	}
	system("pause");
	return 0;

}