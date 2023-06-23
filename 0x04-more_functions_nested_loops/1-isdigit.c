#include "main.h"
#include <ctype.h>

/**
 * _isdigit - cheacs if the value entered is a digit
 * @c: the value passed into function isupper
 * Return: 1 is c is a digit 0 if c not a digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
