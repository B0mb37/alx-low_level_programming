#include "main.h"

/**
 * _strlen_recursion - calculates returns lengths of string
 * @s: string passed into function above for counting
 * Return: int (length of string)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
