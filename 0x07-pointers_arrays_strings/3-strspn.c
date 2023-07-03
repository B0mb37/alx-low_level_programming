#include "main.h"
#include <stdio.h>

/**
 * _strspn - funct that gets length of prefix substring
 * @s: first value
 * @accept: secong variable
 * Return: value (bytes from s with bytes from accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, val, check;

	val = 0;

	for (i = 0; s[i] != '\0'; i ++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if accept[j] == s[i]
			{
				val ++;
				check = 1;
			}
		}

		if (check == 0)
			return (val);
	}

	return (val);
}
