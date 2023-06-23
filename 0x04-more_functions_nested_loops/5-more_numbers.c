#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 15; j++)
		{
			c = j + '0';
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
