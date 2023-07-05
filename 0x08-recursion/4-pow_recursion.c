#include "main.h"

/**
 * _pow_recursion - returns value of a number raised to power of another
 * @x: number to be raised to a power
 * @y: the power to raise number x to
 * Return: z (x raised to power y)
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	z = x * _pow_recursion(x, y - 1);

	return (z);
}
