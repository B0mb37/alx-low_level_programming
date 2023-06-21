#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers from 1 & 2
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long long int a = 1, b = 2;
	int i, temp;

	for (i = 2; i <= 98; i++)
	{
		printf("%lli, ", a);
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("\n");
	return (0);
}
