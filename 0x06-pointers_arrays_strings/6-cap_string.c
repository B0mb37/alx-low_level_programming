#include "main.h"


/**
 * cap_string - capitalizes all words in a str
 * @s: string input for capitalization
 * Return: s (result)
 */


char *cap_string(char *s)
{
	int n, m;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			if (n == 0)
			{
				s[n] -= 32;
			}
			else
			{
				for (m = 0; m <= 12; j++)
				{
					if (a[m] == s[n] - 1)
					{
						s[n] -= 32;
					}
				}
			}
		}
		n++;
	}
	return (s);
}
