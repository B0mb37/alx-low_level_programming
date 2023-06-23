#include "main.h"

/**
 * _isdigit - cheacs if the value entered is a digit
 * @c: the value passed into function isupper
 * Return: 1 is c is a digit 0 if c not a digit
 */

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
