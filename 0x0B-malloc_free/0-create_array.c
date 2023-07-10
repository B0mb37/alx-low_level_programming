#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializing it with specific char
 * @size: Size of the array for func above
 * @c: Char for initializing array
 * Return: s (array created)
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
