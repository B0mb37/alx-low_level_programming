#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer of given bit to set
 * @index: index of the bit
 * Return: 1 (success) or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits)
		return (-1);
	mask = 1UL << index;

	*n |= mask;

	return (1);
}
