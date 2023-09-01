#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number to be printed binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int digits = 0;
	unsigned long int mask = 1UL << (bits - 1);

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		digits++;
		if (digits % 8 == 0)
			_putchar(' ');
		mask >>= 1;
	}
}
