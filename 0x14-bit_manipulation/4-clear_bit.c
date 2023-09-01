#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: pointer of bit
 * @index of bit
 * Return: 1 (success) -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits)
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
