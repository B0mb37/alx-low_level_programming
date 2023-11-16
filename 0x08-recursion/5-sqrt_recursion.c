#include "main.h"

int _sqrt(int n, int p);

/**
 * _sqrt_recursion - returns natural sqr root of a number
 * @n: number to get sqrt of
 * Return: 0 or sqrt of n
 */

int _sqrt_recursion(int n)
{
	int o;

	o = _sqrt(n, 1);
	return (o);
}


/**
 * _sqrt - calculates natural square root
 * @n: number to calculate sqrt of
 * @p: number for iteration
 * Return: q (natural sqrt)
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
