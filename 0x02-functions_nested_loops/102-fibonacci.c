#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers from 1 and 2
 * Return: 0 (success)
 */

int main(void)
{
	int i, temp;
	unsigned long long int a = 1, b = 2;

	for (i = 2; i <= 50; i++)
	{
		printf("%d, ", a);
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("\n");

	return (0);
}
