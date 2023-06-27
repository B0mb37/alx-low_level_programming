#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to be converted by func
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int i, j, l, m, n;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	n = 0;

	while (s[l] != '\0')
		len++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (j % 2)
			{
				n = -n;
				n = n * 10 + digit;
				m = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					break
				}
				f = 0;
			}
			i++;
		}
		if (f == 0)
		{
			return (0);
		}
		return (n);
	}
}
