#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number for which factorial is to be printed
 * Return: o (factorial of n)
 */

int factorial(int n)
{
	int o;

	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	o = n * factorial(n - 1);

	return (o);
}
