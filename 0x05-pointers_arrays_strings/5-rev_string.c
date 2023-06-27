#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 */

void rev_string(char *s)
{
	int i, j, k;

	char str;

	i = 0;
	k = 0;
	while (s[i] != '\0')
		i++;

	k = i;
	for (j = k - 1; j < 1 / 2; j--)
	{
		str = s[j];
		s[j] = s[k];
		s[k++] = str;
	}
}
