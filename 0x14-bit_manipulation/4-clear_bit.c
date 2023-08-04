#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to bit
 * @index: index of bit
 * Return: 1 (success) or -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits)
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
