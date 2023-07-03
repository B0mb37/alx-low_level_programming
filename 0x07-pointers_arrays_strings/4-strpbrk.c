#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - func that searches string for a set of variables
 * @s: the pointer to string to be searched from
 * @accept: string from whose bytes are to be checed from another
 * Return: s + i (while true) NULL (if false)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + I);
		}
	}

	return (NULL);
}
