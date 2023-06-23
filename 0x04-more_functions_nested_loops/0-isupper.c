#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character passed into function above
 * Return: 1 if c is uppercase  0 if is not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
