#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * followed by line
 * @n: number passed into the funct, for diagonal height
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(" ");
			}
			_putchar("\");
		}
		_putchar("\n");
	}
}
