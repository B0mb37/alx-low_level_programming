#include "main.h"


/**
 * _pow_recursion - returns value of a number raised to power of another
 * @x: number to be raised to a power
 * @y: power to raise number to
 * Return: z (x to y)
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
