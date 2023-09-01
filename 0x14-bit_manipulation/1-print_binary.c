#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number to be printed binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (bits - 1);
	int print_digit = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			print_digit = 1;
		}
		else if (print_digit || mask == 1)
			_putchar('0');
		mask >>= 1;
	}
	_putchar('\n');
}
