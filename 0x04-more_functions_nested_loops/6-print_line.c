#include "main.h"

/**
 * print_line - prints a straight line in terminal
 * @n: number of times underscore printed to give new line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar("_");
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
