#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j, ones, tens;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			ones = j % 10;
			tens = j / 10;
			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
