#include "main.h"

/**
 * puts_half - prints a string followed by new line
 * @str: value passed into function above
 */

void puts_half(char *str)
{
	int l, i, j;

	l = 0;
	while (str[l] != '\0')
		l++;
	if ((l % 2) == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (j = (l - 1) / 2; j < l - 1; j++)
			_putchar(str[j + 1]);
	}
	_putchar('\n');
}
