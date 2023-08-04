#include "main.h"

/**
 * get_bit - gets value of a bit at specific index
 * @n: bit
 * @index: index of bit to get
 * Return: value (of bit) or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	int value;
	unsigned long int mask = 1UL << index;

	if (index >= bits)
		return (-1);
	value = (n & mask) ? 1 : 0;

	return (value);
}
