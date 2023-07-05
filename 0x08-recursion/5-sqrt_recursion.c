#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root of
 * Return: o (square root of n)
 */

int _sqrt_recursion(int n)
{
	int o;

	o = sqrt(n, 1);

	return (o);
}

/**
 * sqrt - Calculates natural square root
 * @n: number to calculate square rooot of
 * @p: number for iteration
 * Return: q (natural square root)
 */

int sqrt(int n, int p)
{
	int q;

	int sqrt = p * p;

	if (sqrt == n)
		return (p);
	else if (sqrt > n)
		return (-1);

	q = sqrt(n, p + 1);

	return (q);
}
