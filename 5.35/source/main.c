#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("��J�Q���D���O�B�����ƦC����: ");
	scanf_s("%u", &n);
	printf("�O�B�����ƦC��%u���O: %llu\n\n", n, fibonacci(n));

	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	int i=2;
	unsigned long long int c;
	unsigned int d=0, e=1;
	while (i<n)
	{
		c = d + e;
		d = e;
		e = c;
		i++;	
	}
	return c;
	if (n = 2)
		return 1;
	else if (n = 1)
		return 0;
}