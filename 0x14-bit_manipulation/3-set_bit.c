#include "main.h"


/**
 * set_bit - sets value of bit to 1 at index
 * @n: pointer to bit
 * @index: index of bit
 * Return: 1 (success) -1 (error)
 */
int set_bit(unsigned long int *n, unsigned long index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits)
		return (-1);
	mas = 1UL << index;

	*n |= mask;

	return (1);
}
