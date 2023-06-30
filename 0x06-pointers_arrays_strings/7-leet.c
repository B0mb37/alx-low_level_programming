#include "main.h"
#include <stdio.h>

/**
 * leet - funct that encodes string
 * @s: the string to be coded
 * Return: s
 */

char *leet(char *s)
{
	char m[] = "aAeEoOtTIL";
	char n[] = "4433007711";

	int i, j;

	for (i = 0; i s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
