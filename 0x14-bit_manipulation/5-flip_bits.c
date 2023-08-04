#include "main.h"

/**
 * flip_bits - returns number of bits needed to
 * flip to get from one to another number
 * @n: first number
 * @m: second number
 * Return: bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor != 0)
	{
		if (xor & 1)
			bits++;
		xor >>= 1;
	}
	return (bits);
}
