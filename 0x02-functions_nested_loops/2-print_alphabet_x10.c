#include "main.h"

/**
 * print_alphabet_x10 - calls _putchar in for loop to print all lowercase alphabet letters inside another for lop to print them ten times
 * Return: 0 (succss)
 */

void print_alphabet_x10(void)
{
	int i, a;
	for(i = 0; i < 10; i++)
	{
		for(a = 97; a < 123; a++)
		{
			_putchar((char) a);
		}
		_putchar('\n');
	}
}
