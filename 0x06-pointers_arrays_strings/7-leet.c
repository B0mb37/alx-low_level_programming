#include "main.h"
#include <stdio.h>

/**
 * leet - funct that encodes string
 * @s: the string to be coded
 * Return: s
 */

char *leet(char *s)
{
	char m[] = {97, 101, 108, 111, 116};
	char n[] = {52, 51, 49, 48, 55};

	int i, j;

	i = 0;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == *c(c + j) - 32;
					s[i] = n[j];
		}
		i++;
	}
	return (s);
}
