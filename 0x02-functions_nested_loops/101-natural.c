#include <stdlib.h>

/**
 * main - prints the sum of multiples of 3 or 5 below 1024 but more than 0
 * Return: 0 (success)
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	prints("%d\n", sum);

	return (0);
}
