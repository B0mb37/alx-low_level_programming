#include "main.h"
#include <stdio.h>

/**
 * _strchr - func that locates a character in a string
 * @s: string to be checked
 * @c: location to be chacked
 * Return: s + i or NULL (pointer to first character of string or NULL)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
