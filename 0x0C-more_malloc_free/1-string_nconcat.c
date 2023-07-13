#include "main.h"

/**
 * string_nconcat - func that concatenates two string
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: first number of bytees in s1 to be included
 * Return: ptr (pointer to concatenated string)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + (n >= j ? j : n);
	
	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l && s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; j < l && s2[j]; i++, j++)
		ptr[i] = s2[j];
	
	ptr[i] = '\0';
	
	return (ptr);
}
