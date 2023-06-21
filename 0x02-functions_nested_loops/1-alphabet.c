#include "main.h"

/**
 * print_alphabet - calls _putchar in for loop,
 * printing all lower alphabet characters then a new line after
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar((char) a);
	}
	_putchar('\n');
}
