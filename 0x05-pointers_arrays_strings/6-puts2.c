#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with first character then new line
 * @str: value passed into func above
 */

void puts2(char *str)
{
	int l, j;

	l = 0;
	while (str[l] != '\0')
		l++;
	for (j = 0; j < l; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
