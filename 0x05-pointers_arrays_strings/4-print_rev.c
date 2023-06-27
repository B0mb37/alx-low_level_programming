#include "main.h"

/**
 * print_rev - prints string in reverse followed by new line
 * @s: string to be changed in function above
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
		i++;
	k = 1;
	for (j = k - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
