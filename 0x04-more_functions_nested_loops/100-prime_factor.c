#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor of number
 * Return: 0 (success)
 */

int prime_factor(void)
{
	long long i, number;

	number = 612852475143;

	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}

	if (number > 0)
	{
		max_prie = number;
	}

	printf("%lld", max_prime);

	return (0);
}