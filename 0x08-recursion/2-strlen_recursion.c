#include "main.h"

/**
 * _strlen_recursion - calculates then returns length of a string
 * @s: the string passed into func above for counting
 * Return: int (length if string)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
