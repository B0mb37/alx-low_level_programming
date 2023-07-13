#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - func that concatenates two string
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: first number of bytees in s1 to be included
 * Return: ptr (pointer to concatenated string)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0, len2 = 0, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	l = len1 + (n < len2 ? n : len2);

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (NULL);

	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, n < len2 ? n : len2);

	ptr[l] = '\0';

	return (ptr);
}
