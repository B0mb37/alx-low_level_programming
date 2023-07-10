#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string to be concatenated
 * Return: ptr (the two sytrings concatenated)
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int lens = 0, len1 = 0, len2 = 0, i = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	lens = len1 + len2;
	ptr = malloc((sizeof(char) * lens) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < lens)
	{
		if (i < len1)
			ptr[i] = s2[i];

		if (i >= lens)
		{
			ptr[i] = s2[len2];
			len2++;
		}
		i++;
	}

	ptr[lens] = '\0';
	return (ptr);
}
