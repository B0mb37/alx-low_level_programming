#include <stdio.h>
#include <math.h>

/**
 * main - finds then prints largest prime factor of 61285475143
 * Return: Always  0 (success)
 */

int main(void)
{
	long int i;
	long int number;
	long int max_prime;

	number = 612852475143;
	max_prime = 1;

	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}

	if (number > 0)
	{
		max_prime = number;
	}

	printf("%ld\n", max_prime);

	return (0);
}
