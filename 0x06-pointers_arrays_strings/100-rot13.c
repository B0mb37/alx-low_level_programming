#include "main.h"


/**
 * rot13 - letter subscription cipher
 * @s: string pointer passed into funct
 * Return: s (encoded message)
 */

char *rot13(char *s)
{
	int i, j;

	char normData[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotData[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == normData[j])
			{
				s[i] = rotData[j];
				break;
			}
		}
	}
	return (s);
}
