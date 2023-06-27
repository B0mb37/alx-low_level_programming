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
		for (n = (l - 1) / 2; n < l - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
