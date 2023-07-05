#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root of
 * Return: o (square root of n)
 */

int _sqrt_recursion(int n)
{
	int o;

	o = _sqrt(n, 1);

	return (o);
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate square rooot of
 * @p: number for iteration
 * Return: q (natural square root)
 */

int _sqrt(int n, int p)
{
	int q;

	int sq = p * p;

	if (sq == n)
		return (p);
	else if (sq > n)
		return (-1);

	q = _sqrt(n, p + 1);

	return (q);
}
