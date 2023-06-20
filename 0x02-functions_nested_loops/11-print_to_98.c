#include "main.h"

/**
 * print_to_98 - prints all natural numbers fom n to 98 followed by a new line
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
