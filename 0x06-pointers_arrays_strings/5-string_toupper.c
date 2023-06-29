#include "main.h"
#include <ctype.h>


/**
 * string_toupper - funct that changes all lowercase to uppercase
 * @s: lowercase input to be changed
 * Return: s (changed string)
 */

char *string_toupper(char *s)
{
	int n;

	n = 0;

	while (s[n])
	{
		s[n] = toupper(s[n]);
		n++;
	}
	return (s);
}
