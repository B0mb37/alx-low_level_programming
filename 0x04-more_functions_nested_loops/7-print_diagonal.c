#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * followed by line
 * @n: number passed into the funct, for diagonal height
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
